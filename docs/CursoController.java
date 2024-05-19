package devandroid.silas.applista.Controler;

import java.util.ArrayList;
import java.util.List;

import devandroid.silas.applista.Model.Curso;

public class CursoController {

    private List<Curso> listaCursos;
    public List<Curso> getListaCurso(){
        listaCursos = new ArrayList<Curso>();
        listaCursos.add(new Curso(1," Curso 1" ));
        listaCursos.add(new Curso(2, "Curso 2"));
        listaCursos.add(new Curso(3, "Curso 3"));
        listaCursos.add(new Curso(4, "Curso 4"));
        listaCursos.add(new Curso(5, "Curso 5"));

        return listaCursos;
    }


    public ArrayList<String> getListaStringArray(){
        ArrayList<String> dados = new ArrayList<>();
        for (int i = 0; i < getListaCurso().size(); i++) {
          Curso curso = (Curso)getListaCurso().get(i);
          dados.add(curso.getNomeCurso());
        }
        return dados;
    }

}
