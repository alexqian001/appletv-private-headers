/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVCarouselViewDataSource.h"
#import "ATVCarouselViewUIDelegate.h"
#import "BRControl.h"

@class NSDictionary, NSArray, ATVDataQuery, BRTextControl, ATVCarouselView, BRListView, ATVRadioNPTrackInfoView, BRMediaPlayer, ATVFadeLayer, BRScrollControl, ATVRadioPlayer;

__attribute__((visibility("hidden")))
@interface ATVRadioNPHistoryView : BRControl <ATVCarouselViewDataSource, ATVCarouselViewUIDelegate> {
	ATVRadioPlayer *_headlessPlayer;	// 84 = 0x54
	BRMediaPlayer *_player;	// 88 = 0x58
	ATVCarouselView *_carousel;	// 92 = 0x5c
	unsigned _selectedIndex;	// 96 = 0x60
	NSArray *_positions;	// 100 = 0x64
	float _displacement;	// 104 = 0x68
	ATVFadeLayer *_leftFade;	// 108 = 0x6c
	ATVFadeLayer *_rightFade;	// 112 = 0x70
	BRTextControl *_stationNameView;	// 116 = 0x74
	BRTextControl *_stationFollowersView;	// 120 = 0x78
	ATVRadioNPTrackInfoView *_trackInfoView;	// 124 = 0x7c
	BRScrollControl *_listScroller;	// 128 = 0x80
	BRListView *_optionsList;	// 132 = 0x84
	NSArray *_trackOptions;	// 136 = 0x88
	NSDictionary *_menuTextAttributes;	// 140 = 0x8c
	NSArray *_historyItems;	// 144 = 0x90
	ATVDataQuery *_addStationQuery;	// 148 = 0x94
	float _posterWidth;	// 152 = 0x98
	float _posterHeight;	// 156 = 0x9c
	float _selectedPosterWidth;	// 160 = 0xa0
	float _selectedPosterHeight;	// 164 = 0xa4
	NSRange _rangeOfFocusablePositions;	// 168 = 0xa8
}
@property(retain, nonatomic) ATVDataQuery *addStationQuery;	// G=0x92961; S=0x92971; @synthesize=_addStationQuery
@property(retain, nonatomic) ATVCarouselView *carousel;	// G=0x92679; S=0x92689; @synthesize=_carousel
@property(assign, nonatomic) float displacement;	// G=0x92725; S=0x92735; @synthesize=_displacement
@property(copy, nonatomic) NSArray *historyItems;	// G=0x9293d; S=0x92951; @synthesize=_historyItems
@property(readonly, assign, nonatomic, getter=_isOnCurrentTrack) BOOL isOnCurrentTrack;	// G=0x92035; 
@property(retain, nonatomic) ATVFadeLayer *leftFade;	// G=0x92745; S=0x92755; @synthesize=_leftFade
@property(retain, nonatomic) BRScrollControl *listScroller;	// G=0x9285d; S=0x9286d; @synthesize=_listScroller
@property(retain, nonatomic) NSDictionary *menuTextAttributes;	// G=0x92905; S=0x92915; @synthesize=_menuTextAttributes
@property(retain, nonatomic) BRListView *optionsList;	// G=0x92895; S=0x928a5; @synthesize=_optionsList
@property(assign, nonatomic) __weak BRMediaPlayer *player;	// G=0x92645; S=0x92665; @synthesize=_player
@property(retain, nonatomic) NSArray *positions;	// G=0x926c1; S=0x926d1; @synthesize=_positions
@property(assign, nonatomic) float posterHeight;	// G=0x929b9; S=0x929c9; @synthesize=_posterHeight
@property(assign, nonatomic) float posterWidth;	// G=0x92999; S=0x929a9; @synthesize=_posterWidth
@property(assign, nonatomic) NSRange rangeOfFocusablePositions;	// G=0x926f9; S=0x92711; @synthesize=_rangeOfFocusablePositions
@property(retain, nonatomic) ATVFadeLayer *rightFade;	// G=0x9277d; S=0x9278d; @synthesize=_rightFade
@property(assign, nonatomic) unsigned selectedIndex;	// G=0x926b1; S=0x8e39d; @synthesize=_selectedIndex
@property(assign, nonatomic) float selectedPosterHeight;	// G=0x929f9; S=0x92a09; @synthesize=_selectedPosterHeight
@property(assign, nonatomic) float selectedPosterWidth;	// G=0x929d9; S=0x929e9; @synthesize=_selectedPosterWidth
@property(retain, nonatomic) BRTextControl *stationFollowersView;	// G=0x927ed; S=0x927fd; @synthesize=_stationFollowersView
@property(retain, nonatomic) BRTextControl *stationNameView;	// G=0x927b5; S=0x927c5; @synthesize=_stationNameView
@property(retain, nonatomic) ATVRadioNPTrackInfoView *trackInfoView;	// G=0x92825; S=0x92835; @synthesize=_trackInfoView
@property(retain, nonatomic) NSArray *trackOptions;	// G=0x928cd; S=0x928dd; @synthesize=_trackOptions
- (id)init;	// 0x8d1f9
- (void).cxx_destruct;	// 0x92a19
- (void)_dataItemPropertySet:(id)set;	// 0x8dac1
// declared property getter: - (BOOL)_isOnCurrentTrack;	// 0x92035
- (void)_previewOrPlayTrack:(id)track;	// 0x91e6d
- (void)_stopPreviewingOrPlaying;	// 0x92015
- (void)_updateTrackOptions;	// 0x920bd
- (void)_updateViewForSelectedIndex;	// 0x8e3bd
// declared property getter: - (id)addStationQuery;	// 0x92961
- (BOOL)brEventAction:(id)action;	// 0x8e115
// declared property getter: - (id)carousel;	// 0x92679
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0x8f2d9
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x8ebd5
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0x8ec51
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x8f2e1
- (void)controlWasActivated;	// 0x8e511
- (void)controlWasDeactivated;	// 0x8e6ed
- (void)dealloc;	// 0x8da21
// declared property getter: - (float)displacement;	// 0x92725
// declared property getter: - (id)historyItems;	// 0x9293d
- (void)layoutSubcontrols;	// 0x8db91
// declared property getter: - (id)leftFade;	// 0x92745
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x9079d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x907cd
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x90791
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8fc51
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x90755
// declared property getter: - (id)listScroller;	// 0x9285d
// declared property getter: - (id)menuTextAttributes;	// 0x92905
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x8eb99
// declared property getter: - (id)optionsList;	// 0x92895
// declared property getter: - (id)player;	// 0x92645
// declared property getter: - (id)positions;	// 0x926c1
// declared property getter: - (float)posterHeight;	// 0x929b9
// declared property getter: - (float)posterWidth;	// 0x92999
// declared property getter: - (NSRange)rangeOfFocusablePositions;	// 0x926f9
- (void)resetSelection;	// 0x8e2b1
// declared property getter: - (id)rightFade;	// 0x9277d
// declared property getter: - (unsigned)selectedIndex;	// 0x926b1
// declared property getter: - (float)selectedPosterHeight;	// 0x929f9
// declared property getter: - (float)selectedPosterWidth;	// 0x929d9
// declared property setter: - (void)setAddStationQuery:(id)query;	// 0x92971
// declared property setter: - (void)setCarousel:(id)carousel;	// 0x92689
// declared property setter: - (void)setDisplacement:(float)displacement;	// 0x92735
- (void)setHistory:(id)history withEvent:(unsigned)event;	// 0x8e72d
// declared property setter: - (void)setHistoryItems:(id)items;	// 0x92951
// declared property setter: - (void)setLeftFade:(id)fade;	// 0x92755
// declared property setter: - (void)setListScroller:(id)scroller;	// 0x9286d
// declared property setter: - (void)setMenuTextAttributes:(id)attributes;	// 0x92915
// declared property setter: - (void)setOptionsList:(id)list;	// 0x928a5
// declared property setter: - (void)setPlayer:(id)player;	// 0x92665
// declared property setter: - (void)setPositions:(id)positions;	// 0x926d1
// declared property setter: - (void)setPosterHeight:(float)height;	// 0x929c9
// declared property setter: - (void)setPosterWidth:(float)width;	// 0x929a9
// declared property setter: - (void)setRangeOfFocusablePositions:(NSRange)focusablePositions;	// 0x92711
// declared property setter: - (void)setRightFade:(id)fade;	// 0x9278d
// declared property setter: - (void)setSelectedIndex:(unsigned)index;	// 0x8e39d
// declared property setter: - (void)setSelectedPosterHeight:(float)height;	// 0x92a09
// declared property setter: - (void)setSelectedPosterWidth:(float)width;	// 0x929e9
// declared property setter: - (void)setStationFollowersView:(id)view;	// 0x927fd
// declared property setter: - (void)setStationNameView:(id)view;	// 0x927c5
// declared property setter: - (void)setTrackInfoView:(id)view;	// 0x92835
// declared property setter: - (void)setTrackOptions:(id)options;	// 0x928dd
- (void)simulateEvent:(id)event;	// 0x8e1d9
// declared property getter: - (id)stationFollowersView;	// 0x927ed
// declared property getter: - (id)stationNameView;	// 0x927b5
// declared property getter: - (id)trackInfoView;	// 0x92825
// declared property getter: - (id)trackOptions;	// 0x928cd
@end
