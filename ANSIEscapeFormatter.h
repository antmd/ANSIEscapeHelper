//
//  ANSIEscapeFormatter.h
//  AnsiColorsTest
//
//  Created by Ali Rantakari on 18.3.09.
//  Copyright 2009 Ali Rantakari. All rights reserved.
//

#import <Cocoa/Cocoa.h>



@interface ANSIEscapeFormatter : NSObject
{
	NSFont *font;
}

@property(retain) NSFont *font;

- (NSArray*) attributesForString:(NSString*)aString cleanString:(NSString**)aCleanString;

@end