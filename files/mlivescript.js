/*
 * NOTE: CONTACT green1139@gmail.com if you would like assistance
 * in making a script for a new poll on MLive or
 * in running this script in your browser...
 * #RigMLivePolls.
 * Peace Out.
 */
function check()
{
    $("#PDI_answer44534974").attr("checked", "true");
    setTimeout(submit, 1000);
}

function submit()
{
    if (PDV_def9738701.indexOf("input.pds-votebutton") == -1)
    {
        PD_button9738701.className = "pds-vote-button-load"
    }
    var B = document.createElement("SCRIPT");
    B.charset = "utf-8";
    B.src = PDV_nurl9738701 + "?" + (new Date).getTime();
    getHead().appendChild(B);
    
    setTimeout(resub, 1000);
}

function resub()
{
    PDV_go9738701();
    setTimeout(check, 1000);
}
window.alert = function() {};
alert = function() {};
check();

