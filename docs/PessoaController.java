package devandroid.silas.applista.Controler;

import android.content.ContentValues;
import android.content.SharedPreferences;
import android.widget.Toast;

import java.util.List;

import devandroid.silas.applista.DAO.ListaVIPDB;
import devandroid.silas.applista.Model.Curso;
import devandroid.silas.applista.Model.Pessoa;
import devandroid.silas.applista.View.MainActivity;

public class PessoaController extends ListaVIPDB {


    SharedPreferences pref;
    SharedPreferences.Editor edit;

    MainActivity mainContext;
    public static final String NOME_SHARED = "ListaVipDATA";

    public PessoaController(MainActivity context) {
        super(context);
        pref = context.getSharedPreferences(NOME_SHARED, 0);
        mainContext = context;
        edit = pref.edit();
    }

    public void Salvar(Pessoa pessoa) {

        ContentValues dados = new ContentValues();
        dados.put("Nome", pessoa.getPrimeiroNome());
        dados.put("sobreNome", pessoa.getSobreNome());
        dados.put("cursoDesejado", pessoa.getCursoDesejado().getNomeCurso());
        dados.put("telefone", pessoa.getTelefoneContato());

        super.InsertLista(dados, "tbListVip");

        Toast.makeText(mainContext, "Dados Salvos", Toast.LENGTH_SHORT).show();
        this.LimparDados();

    }

    public List<Pessoa> MOstrarListaVIP(){
        List<Pessoa> lista = super.getListaPessoa();
        return  lista;
    }


    public Pessoa buscarDados() {
        Pessoa pessoaConsult = new Pessoa();
        pessoaConsult.setPrimeiroNome(pref.getString("PrimeiroNome", "ND"));
        pessoaConsult.setSobreNome(pref.getString("SobreNome", "ND"));
        pessoaConsult.setCursoDesejado(new Curso(1, pref.getString("Curso", "NA")));
        pessoaConsult.setTelefoneContato(pref.getString("Telefone", "NA"));
        return pessoaConsult;

    }

    public void LimparDados() {
        mainContext.Nome.setText("");
        mainContext.txtSobreNome.setText("");
        mainContext.txtTelefone.setText("");
    }

}
