/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Computers-Structs.h"
#import "MusicGeniusMixesController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRPageStripView, NSTimer, NSArray;

@interface MusicGeniusMixesController : XXUnknownSuperclass {
	BRPageStripView *_geniusMixesView;	// 64 = 0x40
	int _dataClientType;	// 68 = 0x44
	NSArray *_data;	// 72 = 0x48
	ATVMediaQueryRef _dataQuery;	// 76 = 0x4c
	ATVMediaQueryRef _geniusMixSongsQuery;	// 80 = 0x50
	NSTimer *_spinnerTimer;	// 84 = 0x54
	BOOL _showingSpinner;	// 88 = 0x58
	BOOL _handlingDataClientUpdate;	// 89 = 0x59
	BOOL _refreshNeeded;	// 90 = 0x5a
	int _geniusQueryIndex;	// 92 = 0x5c
}
- (id)init;	// 0x124c5
- (id)accessibilityLabel;	// 0x1240d
- (void)dealloc;	// 0x12681
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x123ed
- (id)pageStripView:(id)view detailedPageAtIndex:(long)index;	// 0x12739
- (void)pageStripView:(id)view didPlayPageAtIndex:(long)index;	// 0x123d9
- (void)pageStripView:(id)view didSelectPageAtIndex:(long)index;	// 0x128f9
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x1314d
- (void)wasExhumed;	// 0x1242d
- (void)wasPushed;	// 0x12489
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x12221
- (float)yDetailedPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x12231
- (float)yPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x12229
@end

@interface MusicGeniusMixesController (MusicGeniusMixesControllerPrivate)
- (ATVDataClientRef)_dataClient;	// 0x129f5
- (void)_dataClientUpdated:(id)updated;	// 0x12381
- (void)_dataQueryComplete;	// 0x12cb1
- (void)_executeDataQuery;	// 0x12b61
- (id)_filterDataQueryResults:(ATVMediaQueryRef)results;	// 0x1305d
- (void)_geniusMixSongsQueryComplete;	// 0x12ed1
- (void)_setDataQuery:(ATVMediaQueryRef)query;	// 0x12c79
- (void)_setGeniusMixSongsQuery:(ATVMediaQueryRef)query;	// 0x12c41
- (void)_showSpinner:(BOOL)spinner;	// 0x122d9
- (void)_spinnerTimerFired;	// 0x12a39
@end
