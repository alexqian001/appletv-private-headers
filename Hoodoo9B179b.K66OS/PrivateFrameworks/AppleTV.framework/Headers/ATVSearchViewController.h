/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchViewDelegate.h"
#import "AppleTV-Structs.h"
#import "BRTextFieldDelegate.h"
#import "BRViewController.h"

@class NSCache, NSTimer, NSString, ATVSearchView;

@interface ATVSearchViewController : BRViewController <ATVSearchViewDelegate, BRTextFieldDelegate> {
@private
	NSTimer *_delayedLoadTimer;	// 88 = 0x58
	NSCache *_resultsCache;	// 92 = 0x5c
	NSString *_latestSearchString;	// 96 = 0x60
	BOOL _textDidEndEditing;	// 100 = 0x64
	NSString *_latestSearchStringWithResults;	// 104 = 0x68
}
@property(readonly, assign) NSString *latestSearchStringWithResults;	// G=0x3037fe49; @synthesize=_latestSearchStringWithResults
@property(readonly, assign) ATVSearchView *searchView;	// G=0x3037fb75; @dynamic
- (id)init;	// 0x3037fa09
- (void)_handleDelayedLoad:(id)load;	// 0x3037ffe9
- (id)_latestSearchString;	// 0x3037fe59
- (id)_latestSearchStringWithResults;	// 0x30380061
- (void)_restoreLatestSearchStringWithResults;	// 0x3038012d
- (void)_setDelayedLoadTimer:(id)timer;	// 0x3037ffbd
- (void)_setLatestSearchString:(id)string;	// 0x3037fe69
- (void)_setResults:(id)results forSearch:(id)search;	// 0x3037fdc1
- (void)_updateLatestSearchStringWithResults:(id)results;	// 0x30380071
- (void)dealloc;	// 0x3037faed
// declared property getter: - (id)latestSearchStringWithResults;	// 0x3037fe49
// declared property getter: - (id)searchView;	// 0x3037fb75
- (void)searchView:(id)view focusDidChangeToControl:(int)focus;	// 0x3037fc01
- (void)searchWithString:(id)string;	// 0x3037fb85
- (void)textDidChange:(id)text;	// 0x3037fc39
- (void)textDidEndEditing:(id)text;	// 0x3037fd1d
@end

