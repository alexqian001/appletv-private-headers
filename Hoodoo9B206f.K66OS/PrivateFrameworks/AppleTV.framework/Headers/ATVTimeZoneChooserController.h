/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import "BRSelectionHandler.h"
#import "ATVSearchController.h"
#import "BRControlFactory.h"

@class NSArray;

@interface ATVTimeZoneChooserController : ATVSearchController <BRProvider, BRControlFactory, BRSelectionHandler> {
@private
	NSArray *_matchedCities;	// 156 = 0x9c
}
+ (void)initialize;	// 0x3660ac21
- (id)init;	// 0x3660acb5
- (void)_runInitialSearch;	// 0x3660ae79
- (id)controlFactory;	// 0x3660af59
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3660afd5
- (id)dataAtIndex:(long)index;	// 0x3660af7d
- (long)dataCount;	// 0x3660af5d
- (void)dealloc;	// 0x3660adc9
- (BOOL)handleSelectionForControl:(id)control;	// 0x3660b0ed
- (id)hashForDataAtIndex:(long)index;	// 0x3660af9d
- (void)setMatchedCities:(id)cities;	// 0x3660af19
- (void)wasPopped;	// 0x3660aec5
- (void)wasPushed;	// 0x3660ae15
@end

