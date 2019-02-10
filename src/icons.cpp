/* Autogenerated by png2wx.pl on Fri Oct 25 16:20:08 2013 */
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#	include <wx/wx.h>
#endif
#include <wx/mstream.h>
#include "icons.h"
#include <wx/fileconf.h>

wxBitmap *_img_uktides;

#ifdef UKTIDES_USE_SVG
#include "ocpn_plugin.h"
wxString _svg_uktides;
wxString _svg_uktides_rollover;
wxString _svg_uktides_toggled;
#endif

void initialize_images(void)
{
	{
		wxMemoryInputStream sm("\211PNG\r\n\032\n\000\000\000\rIHDR\000\000\000 \000\000\000 \b\006\000\000\000szz\364\000\000\000\011pHYs\000\000\013\023\000\000\013\023\001\000\232\234\030\000\000\004\005IDATX\303\265\226MH[[\020\307\177'^cP\021lK\300\210\264\210\037\017\213\253\336\"\204\"\330EQ\027\202\272\261\270\261\340\252\212\245\335\270p%H\334\270\260EQD\020\252h1\013A\212\340\312\242\033\321\333Vy\272xU\"b\004\211_\370I\325\230\363\026\352\2157\271\251\211\326\201\201\363u\317\374\357\314\374g\216\220R\312\235\235\035VVV\370[244\304\321\321\021N\247\223\274\274<}}{{\233\221\221\021\000\034\016\aMMM(\273\273\273\177\3258@\177\177?>\237\217\224\224\024\035\300\361\3611uuu,//c\263\331\350\352\352bww\027\213\307\343\341\276\345\364\364\224\206\206\006\226\227\227\261Z\255\264\267\267\223\237\237\317\312\312\n\226\3736\036\b\004hlldnn\016\253\325J[[\033\252\252\002 \204\270\177\000.\227\213\251\251)\024E\301\345r\341t:\r\373\312m.}v\371\af\362\357\344\244>\036\034\034\304\353\365\002\340\367\373ILL\014;\177\243\aTU\3255\020\b b\000\352\365z\261X,ddd\000\320\332\332\312\351\351it\036\270\212\223\246iak2\006\020\315\315\315deeQ]]\315\332\332\032===\324\327\327\377\331\003\252\252299i0~\005F\233\2355\036nj\002)\203\232\220\240o\325\324\324PRRBvv6eee\000\014\014\014\260\264\264\024\031\200\252\252\314\314\314\230\306\3532u\215\363G\217\"\356\333\355v}\\WWGbb\"~\277\237\226\226\026s\000\252\252\242i\032\026K\014\344\370\374\031^\277\016jH\214\257$55\225\332\332Z\000\026\027\027q\273\335\341\000B]\036\225\374\374\011_\276\004\325\357\217x\264\252\252\n\207\303\001@gg'>\237/v\032\206\261\340\351Sx\361\342ZZ+\214\215\215\231~k\265Z\031\035\035\215\255\016\250\3278\257iZ8\003^\276\204O\237\202\363\320$5\271\357\272\247\377H\303\374\374\374\233i\270\271i\370\316\346\361p\374\344\011\212\242\334h\034@h\232&#\321\320\224\011R\362\354\371\363\210\177\370__\037\377\274ycZC\314rL13>;;\213\020\":\032\206\310\331\343\307\272\241\320\360\231\211\022j|bb\"\262q3y\373\026>~\014\342\233\233\213\211U\312\235i\030\027\a\312\255z\232\021@__\037\347\347\347\024\026\026\222\223\223\243\037\330\337\337gxx\030\200\312\312JRSS\2157\270\335\360\375{\260\377\273\\\220\234\034;\200\336\336^NNN\260\333\355a\000\272\273\273\001(**\n\a\260\261q\241W!8?\277\235\an-\245\245\360\352U\020\300\265ft\247:\020\2658\235\360\356\235>M\372\372\225#\273\235\270\270\270\210\306\003\201\200\336o\356\376$\233\2377L\023~\377\246\240\240\300@\301\353\306\017\017\017\r\315\356\356\036p\273\r\265a\363\333\267\213\222-\245i\035H\016I\320\273\003x\370\020\036<\bkVB\210\250h\255\373\302f\263EgP\206T\356\367\357\341\327/]E\244\207\314M\000\022.\263w\177\177\337p\340\340\340\000\003\310\033\252\244\270M!\022B\220\231\231\211\317\347ctt\224\312\312J\222\222\222\000\030\037\037\327{\271\335nG\b\301\374\217\037a\217\222\300\225g\024\005!%B\b\344\345Z\350\370\302\221\022)\345\005\000)%\345\345\345LOO\343\361x(--%''\207\255\255-VWW\001(..&>>\036)%~)\243\n\321\225Qi\262\246{\314\353\365\312\215\313J622BGG\a{{{\206C\025\025\025|\370\360!\372<\211R\322\323\323\021RJ\271\261\261\301\372\372\272\276\261\260\260\300\331\331\031\000\271\271\271\221_\310w\020\207\303AZZ\032\377\003\366\210\247\317\266\343\265\355\000\000\000\000IEND\256B`\202", 1107);
		_img_uktides = new wxBitmap(wxImage(sm));
	}

#ifdef UKTIDES_USE_SVG
	wxFileName fn;
	fn.SetPath(*GetpSharedDataLocation());
	fn.AppendDir(_T("plugins"));
	fn.AppendDir(_T("UKTides_pi"));
	fn.AppendDir(_T("data"));
	fn.SetFullName(_T("UKTides_pi.svg"));
	_svg_uktides = fn.GetFullPath();
	fn.SetFullName(_T("UKTides_pi_rollover.svg"));
	_svg_uktides_rollover = fn.GetFullPath();
	fn.SetFullName(_T("UKTides_pi_toggled.svg"));
	_svg_uktides_toggled = fn.GetFullPath();
#endif
	
	return;
}