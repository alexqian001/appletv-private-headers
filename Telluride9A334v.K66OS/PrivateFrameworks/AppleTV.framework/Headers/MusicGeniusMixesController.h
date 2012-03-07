/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSTimer, NSArray, BRPageStripView;

__attribute__((visibility("hidden")))
@interface MusicGeniusMixesController : BRViewController {
@private
	BRPageStripView *_geniusMixesView;	// 84 = 0x54
	unsigned long _dataClientType;	// 88 = 0x58
	NSArray *_data;	// 92 = 0x5c
	ATVMediaQueryRef _dataQuery;	// 96 = 0x60
	ATVMediaQueryRef _geniusMixSongsQuery;	// 100 = 0x64
	NSTimer *_spinnerTimer;	// 104 = 0x68
	BOOL _showingSpinner;	// 108 = 0x6c
	BOOL _handlingDataClientUpdate;	// 109 = 0x6d
	BOOL _refreshNeeded;	// 110 = 0x6e
	int _geniusQueryIndex;	// 112 = 0x70
}
- (id)init;	// 0x33319545
- (ATVDataClientRef)_dataClient;	// 0x33319e01
- (void)_dataClientUpdated:(id)updated;	// 0x33319e45
- (void)_dataQueryComplete;	// 0x3331a235
- (void)_executeDataQuery;	// 0x3331a0ad
- (id)_filterDataQueryResults:(ATVMediaQueryRef)results;	// 0x3331a4a1
- (void)_geniusMixSongsQueryComplete;	// 0x3331a5dd
- (void)_setDataQuery:(ATVMediaQueryRef)query;	// 0x3331a201
- (void)_setGeniusMixSongsQuery:(ATVMediaQueryRef)query;	// 0x3331a5a9
- (void)_showSpinner:(BOOL)spinner;	// 0x33319ff5
- (void)_spinnerTimerFired;	// 0x33319ea9
- (id)accessibilityLabel;	// 0x33319885
- (void)dealloc;	// 0x33319719
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x333198a5
- (id)pageStripView:(id)view detailedPageAtIndex:(long)index;	// 0x33319ab9
- (void)pageStripView:(id)view didPlayPageAtIndex:(long)index;	// 0x33319df1
- (void)pageStripView:(id)view didSelectPageAtIndex:(long)index;	// 0x33319c9d
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x333198c5
- (void)wasExhumed;	// 0x33319821
- (void)wasPushed;	// 0x333197e1
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x33319c81
- (float)yDetailedPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x33319c95
- (float)yPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x33319c8d
@end
