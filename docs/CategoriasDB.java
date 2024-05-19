package devandroid.silas.categorias.dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import androidx.annotation.Nullable;

import java.util.ArrayList;
import java.util.List;

import devandroid.silas.categorias.model.Categoria;

public class CategoriasDB extends SQLiteOpenHelper {

    public static final String DB_NAME = "dbLista.sqlite";
    public static final int DB_VERSION = 1;

    private static SQLiteDatabase db;
    private static Cursor cur;

    public CategoriasDB(@Nullable Context context) {
        super(context, DB_NAME, null, DB_VERSION);
        db = getWritableDatabase();
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        String sql1 = "CREATE TABLE categorias(" +
                "id integer primary key autoincrement," +
                "nome text not null" +
                ")";
        db.execSQL(sql1);
    }

    public static List<String> listaCategoria() {
        List<String> categorias = new ArrayList<>();
        String sql = "select * from categorias";
        cur = db.rawQuery(sql, null);

        if (cur.moveToFirst()) {
            do {
                Categoria cat = new Categoria();
                cat.setNome(cur.getString(1));
                categorias.add(cat.getNome());
            } while (cur.moveToNext());
        }
        return categorias;
    }


    public static void InsertDados(ContentValues dados, String nomeTabela) {
        db.insert(nomeTabela, null, dados);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
