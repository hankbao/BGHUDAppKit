//
//  BGThemeManager.h
//  BGHUDAppKit
//
//  Created by BinaryGod on 6/15/08.
//
//  Copyright (c) 2008, Tim Davis (BinaryMethod.com, binary.god@gmail.com)
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification,
//  are permitted provided that the following conditions are met:
//
//		Redistributions of source code must retain the above copyright notice, this
//	list of conditions and the following disclaimer.
//
//		Redistributions in binary form must reproduce the above copyright notice,
//	this list of conditions and the following disclaimer in the documentation and/or
//	other materials provided with the distribution.
//
//		Neither the name of the BinaryMethod.com nor the names of its contributors
//	may be used to endorse or promote products derived from this software without
//	specific prior written permission.
//
//	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS AS IS AND
//	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//	IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//	INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//	BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//	OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//	WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//	ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
//	POSSIBILITY OF SUCH DAMAGE.

#import <Cocoa/Cocoa.h>


@interface BGThemeManager : NSObject {

}

//Scroller Theme
-(NSColor *)scrollerStroke;						//Color for Arrows/Knob Border
-(NSGradient *)scrollerKnobGradient;			//Gradient used to draw knob
-(NSGradient *)scrollerTrackGradient;			//Gradient used to draw knob track
-(NSGradient *)scrollerArrowNormalGradient;		//Gradient used on normal Arrow button
-(NSGradient *)scrollerArrowPushedGradient;		//Gradient used on pushed Arrow button
-(float)scrollerAlphaValue;

//Slider Theme
-(NSColor *)sliderTrackColor;					//Color used to draw slider track

//Text Based Theme
-(NSColor *)textFillColor;						//Color of background if drawbackground set to ON

//Progress Theme
-(NSGradient *)progressTrackGradient;			//Gradient used to draw progress bar track

//Token Theme
-(NSColor *)tokenFillNormal;					//Color used to fill normal token background
-(NSColor *)tokenFillHighlight;					//Color used to fill highlighted token background
-(NSColor *)tokenBorder;						//Color used to draw token border
-(NSColor *)tokenTextColor;						//Color used to draw token text

//Table Theme
-(NSColor *)cellHighlightColor;					//Color used to highlight selected row
-(NSArray *)cellAlternatingRowColors;			//NSArray with 2 Colors used to draw alternating rows
-(NSColor *)cellSelectedTextColor;				//Color used to draw text when row selected
-(NSColor *)tableBackgroundColor;				//Color used to fill table background
-(NSColor *)tableHeaderCellBorderColor;			//Color used to draw border in column headers
-(NSGradient *)tableHeaderCellNormalFill;		//Gradient used to draw normal column header
-(NSGradient *)tableHeaderCellPushedFill;		//Gradient used to draw pushed column header

//General Theme
-(NSGradient *)normalGradient;					//Gradient used to draw normal background
-(NSGradient *)pushedGradient;					//Gradient used to draw pushed background
-(NSGradient *)highlightGradient;				//Gradient used to draw highlight background
-(NSGradient *)normalComplexGradient;			//Gradient used to draw normal 4 tone gradient
-(NSGradient *)pushedComplexGradient;			//Gradient used to draw pushed 4 tone gradient
-(NSGradient *)highlightComplexGradient;		//Gradient used to draw highlight 4 tone gradient
-(NSColor *)normalSolidFill;					//Solid color used to draw normal background
-(NSColor *)pushedSolidFill;					//Solid color used to draw pushed background
-(NSColor *)highlightSolidFill;					//Solid color used to draw highlight background
-(NSColor *)strokeColor;						//Color used to draw border
-(NSColor *)darkStrokeColor;					//Color used to draw dark shadow border
-(NSColor *)textColor;							//Color used to draw text
-(NSShadow *)dropShadow;						//Drop shadow used on all controls
-(float)alphaValue;								//Alpha value that is an optional paremeter, used only
												//if you want certain colors to be draw with the same
												//alpha value.

@end
