#include <iostream>

int main()
{   //---------------------------------------------------------------------------
    // CATST EN C = rearrangement des bits pour correspondre au nouveau type 
    //---------------------------------------------------------------------------
{
    int a = 42;

    double b = a; // conversion implicite = ok pour faire rentrer un type moins precis vers plus precis
    // MAIS l'inverse peut poser probleme => perte de precision notamment.
    double c = (double)a; // convertion explicite

    double d = a;
    int e = d; // cast implicite => comportement hasardeux
    int f = (int)a; // utiliser un cast explicite est la bonne methode a adopter : on signale au compilateur
    // qu'on veut effectivement perdre cette precision.
}
    //---------------------------------------------------------------------------
    //   CAST IDENTITAIRE : la valeur de base apres conversion garde les meme bists
    //  dans le meme ordre == Réinterprétation
    //---------------------------------------------------------------------------
{
    // le type void * est un type + general que tous les autres types d'adresses
    float a = 420.042f;

    void *b  = &a; // reinterprétation implicite de l'adresse d'un flottant vers un void *
    void *c = (void *)&a; // reinterpétation explicite de l'adresse d'in flottant vers un void*

    void    *d = &a;
    int *e = d;
    int *f = (int *)d;

    // Idem ici, toujours utiliser une reinterpretation explicite lorsqu'on veut passe d'un type 
    // étroit pour aller vers un type moins précis 
    // RECAP : une conversion peut etre identitaire (bits pas réorganisés)

}
{
    //---------------------------------------------------------------------------
    //   CAST de type qualifieur : va ajouter une notion de hiérarchie a travers nos types.
    // Ont aura des types + précis et d'autres moins précis
    //---------------------------------------------------------------------------
    int a = 42; //
    int const *b = &a;
    int const *c = (int const*)&a;

    int const *d = &a;
    int *e = d; // si on veut passer d'une adresse constante a une adresse non constante
    // on ne pourra pas compiler : pour que ca soit toléré il faut utiliser la syntaxe explicite.
    int* f = (int *)d;
}

    // Upcast 
    // Downcast

    // STATIC CAST CPP
    {
        int a = 42;

        double b = a;
        int c = b;
        int d = static_cast<int>(b);  // cast explicit
        // ==  je veux faire un static cast (convertir) de l'expression b (double) vers le type int;
    } 
    // DYNAMIC CAST : particularité: il a lieu a l'exécution ( c'est le seul car les autres ont lieu a la compilation)
   // ne fonctionne que dans le cas d'une instance polymorphique : une methode doit etre virtuelle dans
   // notre classe pour que ca fonctionne
    {
        // s'utilise uniquement dans le cadre d'un downcast et vérifie si c'est possible. 
    }

}