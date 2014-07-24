/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import "BRProvider.h"
#import "BRControlFactory.h"
#import "ATVSearchController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVTimeZoneChooserController : ATVSearchController <BRProvider, BRControlFactory, BRSelectionHandler> {
	NSArray *_matchedCities;	// 172 = 0xac
}
+ (void)initialize;	// 0xf0751
- (id)init;	// 0xf0809
- (void).cxx_destruct;	// 0xf0dad
- (void)_runInitialSearch;	// 0xf09c5
- (id)controlFactory;	// 0xf0a9d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0xf0b39
- (id)dataAtIndex:(long)index;	// 0xf0ac1
- (long)dataCount;	// 0xf0aa1
- (BOOL)handleSelectionForControl:(id)control;	// 0xf0cad
- (id)hashForDataAtIndex:(long)index;	// 0xf0ae1
- (void)setMatchedCities:(id)cities;	// 0xf0a75
- (void)wasPopped;	// 0xf0a11
- (void)wasPushed;	// 0xf0961
@end
