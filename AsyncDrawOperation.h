//
//  AsyncDrawOperation.h
//
//  Created by Julian Eberius on 2010-02-16.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MinimapView.h"

@interface AsyncDrawOperation : NSOperation
{
	MinimapView* minimapView;
	NSRect bounds;
	NSRect rectToDrawTo;
	NSColor* fillColor;
	int numLines;
}
- (id)initWithMinimapView:(MinimapView*)mv;
@end