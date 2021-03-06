/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class TSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
	TSUNoCopyDictionary *mFontTable;	// 4 = 0x4
	NSMutableArray *mFontsInOrderOfInsertion;	// 8 = 0x8
}
- (id)init;	// 0x348d5bc1
- (void)clear;	// 0x3491b0b1
- (int)count;	// 0x34aaeb21
- (id)createFontWithName:(id)name;	// 0x348d5d75
- (void)dealloc;	// 0x349066d1
- (id)fontWithName:(id)name;	// 0x348d662d
- (id)fontWithName:(id)name create:(BOOL)create;	// 0x348d5d29
- (id)fonts;	// 0x34aaeb41
@end

