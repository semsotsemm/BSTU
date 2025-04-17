function checkForm(el){
    let vk=" ";
    let inst=" ";
    let face=" ";
    if (state1.checked)
        vk=state1.value+" "; 
    if (state2.checked)
        face=state2.value+" ";
    if (state3.checked)
        inst=state3.value+" ";
    document.getElementById('footed').innerHTML= "Форма успешно заполнена! <br> Имя студента: "
    +el.name.value +"<br> Отчество студента: " + el.secname.value+"<br> Фамилия студента: " + el.fam.value
    +"<br> Почта студента: " + el.pocht.value+"<br> Номер студента: " + el.num.value+"<br> Студент использует такие социальные сети: "+ vk+ face+inst
    +"<br> Студент учится на "+fac.innerHTML+" в " + grop.innerHTML +" на " + cour.innerHTML;
    return false;
}