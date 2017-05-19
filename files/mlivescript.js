/*
 * NOTE: CONTACT green1139@gmail.com if you would like assistance
 * in making a script for a new poll on MLive or
 * in running this script in your browser...
 * #RigMLivePolls.
 * Peace Out.
 */
function check()
{
    $("#PDI_answer44592181").attr("checked", "true");
    setTimeout(submit, 1000);
}

function submit()
{
    var B = document.createElement("SCRIPT");
    B.charset = "utf-8";
    B.src = PDV_nurl9750178 + "?" + (new Date).getTime();
    getHead().appendChild(B);
    
    setTimeout(resub, 1000);
}

function resub()
{
    PDV_go9750178();
    setTimeout(check, 1000);
}
/*
function refreshpage()
{
	console.log("Refreshing!");
	setTimeout(refreshpage, 5000);
	location.href = "http://highschoolsports.mlive.com/news/article/6172807079224116090/which-kalamazoo-area-boys-track-athlete-will-earn-all-state-honors/"
}
setTimeout(refreshpage, 10000);*/

window.alert = function() {};
alert = function() {};
check();
