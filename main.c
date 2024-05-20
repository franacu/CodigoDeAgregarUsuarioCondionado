#include <stdio.h>

int main()
{
    void AgregamosUsuariosAlaZona(Usuario *usuario,Lista *lista)
    {
        //al agregar Usuarios en cada zona, tenemos que saber que las zonas sean las correctas
        Zona *aux=lista->cab;
        while(aux->sig!=NULL && aux->nroDeZona!=usuario->nroDeZona)
        {
            aux=aux->sig;
        }
        //Si la zona no existe, crear una nueva y agregarla a la lista
        if(aux==NULL)
        {
            aux= newZona(usuario->nroDeZona);
            aux->sig=lista->cab;
            lista->cab=aux;
        }
        //caso normal, continuamos como agregaramos siempre..
        if(usuario->nroDeZona==NULL)
        {
            aux->usuario=usuario;
        }else
        {
            Usuario *aux=lista->cab;
            while(aux!=NULL)
            {
                aux=aux->sig;
            }
            aux->sig=usuario;
        }
    }
}
