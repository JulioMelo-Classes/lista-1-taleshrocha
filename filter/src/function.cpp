int * filter( int * first, int * last )
{
    // Percorrer o intervalo do início ao fim, analisando cada elemento
    while( first != last )
    {
        // Avaliar se o elemento deve ser filtrado ou não
        if ( *first <= 0 ) // rejeitado
        {
            // Deslocar todos os elementos a partir do first, 1 posição para esquerda.
            auto i( first );
            while( i != last-1 )
            {
                *i = *(i+1);
                ++i;
            }
            // Potencial 'bug'!!! Não esquecer de atualizar o last_.
            last--;
        }
        else
        {
            // Avançar e aceitar o elemento.
            first++;
        }
    }

    return first; //
}
