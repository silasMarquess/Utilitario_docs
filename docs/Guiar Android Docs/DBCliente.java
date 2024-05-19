package devandroid.silas.testebancodados.DAO;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import androidx.annotation.Nullable;

public class DBCliente extends SQLiteOpenHelper {

    public static  final String nomeDB ="cliente.sqlite";
    public static  final int versionDB =1;

   public  SQLiteDatabase db;
    public DBCliente(Context context) {
        super(context, nomeDB,null,versionDB);
        db= getWritableDatabase();
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        String sql = "CREATE TABLE tbCliente (\n" +
                "    id      INTEGER PRIMARY KEY AUTOINCREMENT,\n" +
                "    nome    TEXT,\n" +
                "    salario REAL,\n" +
                "    idade   INTEGER,\n" +
                "    ativo   INTEGER,\n" +
                "    dataCad TEXT,\n" +
                "    horaCad\n" +
                ")";
        db.execSQL(sql);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
