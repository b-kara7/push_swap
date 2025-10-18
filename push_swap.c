/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:12:33 by bkara             #+#    #+#             */
/*   Updated: 2025/10/18 20:45:21 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    turk_algorithm(t_list **a, t_list **b)
{
    first_push_b(a, b);
    while (ft_listsize(*a) > 3)
    {
        

        pb(a, b);
    }
    
}















/*türkhis algoritma 
{
    first_push_b = ilk iki sayıyı be ye at 
    second_pus_b = A stack’inde kalan elemanların maliyetlerini hesapla, sonra en uygun (en ucuz) olanı B’ye gönder.”
    {
        Ve bu işlemi Ada 3 eleman kalana kadar tekrar edeceğiz.

    Yani ana görev:

    A ve B’nin pozisyonlarını güncelle (update_positions)

    Her A elemanına hedef pozisyon ata (assign_targets)

    Maliyetleri hesapla (evaluate_costs)

    En ucuz olanı seçip B’ye gönder

    Tekrar başa dön (while (A’da 3’ten fazla eleman varsa))

    }


    
    
}*/

/*

2 sayı gelirse (a,b)
a<b ise hiç bir şey yapma ve çık
b<a ise sa ya bas ve çık 


eğer 3 tane sayım varsa (a,b,c)
a<b<c ise aynısını yazdır.
a<c<b ise 
{
    önce sa bas 
    sonra ra bas 
}
b<a<c ise 
{
    sa bas ve çık
}
b<c<a ise 
{
    ra bas ve çık 
}
c<a<b ise 
{
    rra bas ve çık
}
c<b<a ise
{
    önce sa bas 
    sonra rra bas
}

eğer 4 tane sayı gelirse 
en küçük sayıyı bul ve b yığınına at pb ile 
kalan 3 sayıyı 3 sayı bulma fonksiyonuna at;
sonra pa ile attığın sayıyı geri çek.

eğer 5 tane sayım varsa (a,b,c,d,e)
a<b<c<d<e ise hiç bir şey yapma 
bu 5 değer içinden en küçük sayının indexini bul 
{
    (bulduğun index bu yığının üst yarıında mı alt yarısında mı i<=2 || i>2)
    eğer üst yarıdaysa o sayı tepeye geleene kadar ra bas alt yarıdaysa rra bas 
}
şimdi en küçük sayı tepede pb bas B yığınına gönder.
A yığınında kalan 4 sayıiçinde en küçüğüün indexini __bul 
{
    i<= 2  ra bas 
    i> ise rra bas 


}
pb ile b yığınına at 

A yığınında kalan 3 sayıyı yukarıda yazdığın fonksiyona gönder sıralansın.
B yığınından pa ile sayıları çağır 2 kere.

*/
