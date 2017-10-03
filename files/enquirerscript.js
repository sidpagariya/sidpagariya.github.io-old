/*
 * NOTE: CONTACT green1139@gmail.com if you would like assistance
 * in making a script for a new poll on Enquirer or
 * in running this script in your browser...
 * #RigEnquirerPolls.
 * Peace Out.
 */
function check()
{
    $("#PDI_answer45052256").attr("checked", "true");
    setTimeout(submit, 1000);
}

function submit()
{
    var B = document.createElement("SCRIPT");
    B.charset = "utf-8";
    B.src = PDV_nurl9842922 + "?" + (new Date).getTime();
    getHead().appendChild(B);
    
    setTimeout(resub, 1000);
}

function resub()
{
    PDV_go9842922();
    setTimeout(check, 1000);
}
/*
function refreshpage()
{
	console.log("Refreshing!");
	setTimeout(refreshpage, 5000);
	location.href = "http://www.battlecreekenquirer.com/story/sports/2017/10/02/vote-enquirer-high-school-football-player-week-week-6/722699001/"
}
setTimeout(refreshpage, 10000);*/

window.alert = function() {};
alert = function() {};
check();