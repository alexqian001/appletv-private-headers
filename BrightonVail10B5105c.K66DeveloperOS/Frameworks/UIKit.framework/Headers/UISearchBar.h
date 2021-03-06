/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIStatusBarTinting.h"

@class UIImageView, NSArray, UIButton, UITextField, UILabel, UIColor, UIImage, NSString;
@protocol UISearchBarDelegate;

@interface UISearchBar : UIView <UIStatusBarTinting> {
	UITextField *_searchField;	// 84 = 0x54
	UILabel *_promptLabel;	// 88 = 0x58
	UIButton *_cancelButton;	// 92 = 0x5c
	id<UISearchBarDelegate> _delegate;	// 96 = 0x60
	id _controller;	// 100 = 0x64
	UIColor *_tintColor;	// 104 = 0x68
	UIImageView *_separator;	// 108 = 0x6c
	NSString *_cancelButtonText;	// 112 = 0x70
	NSArray *_scopes;	// 116 = 0x74
	int _selectedScope;	// 120 = 0x78
	UIView *_background;	// 124 = 0x7c
	UIView *_scopeBar;	// 128 = 0x80
	UIEdgeInsets _contentInset;	// 132 = 0x84
	UIImageView *_shadowView;	// 148 = 0x94
	id _appearanceStorage;	// 152 = 0x98
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned isTranslucent : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
	} _searchBarFlags;	// 156 = 0x9c
	UIColor *_statusBarTintColor;	// 160 = 0xa0
	UIView *_inputAccessoryView;	// 164 = 0xa4
}
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor;	// G=0x346a0685; S=0x346a050d; @synthesize
@property(assign, nonatomic) int autocapitalizationType;	// G=0x347cefd5; S=0x34605d8d; 
@property(assign, nonatomic) int autocorrectionType;	// G=0x347ceff5; S=0x345dc17d; 
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x34614865; S=0x34605465; 
@property(assign, nonatomic) int barStyle;	// G=0x346a06f5; S=0x34614419; 
@property(retain) UIButton *cancelButton;	// G=0x347cefc5; S=0x347cef71; converted property
@property(assign) BOOL combinesLandscapeBars;	// G=0x347cef49; S=0x345dd05d; converted property
@property(assign) UIEdgeInsets contentInset;	// G=0x347cf185; S=0x345dd3c1; converted property
@property(retain) id controller;	// G=0x346ff961; S=0x345dce59; converted property
@property(assign, nonatomic) id<UISearchBarDelegate> delegate;	// G=0x347cf77d; S=0x345dc19d; @synthesize=_delegate
@property(assign) BOOL drawsBackground;	// G=0x345e1579; S=0x347ceee5; converted property
@property(retain, nonatomic) UIView *inputAccessoryView;	// G=0x346a0c25; S=0x347cf79d; @synthesize=_inputAccessoryView
@property(assign, nonatomic) int keyboardType;	// G=0x347cf055; S=0x34605d6d; 
@property(copy, nonatomic) NSString *placeholder;	// G=0x345dd085; S=0x345dbdfd; 
@property(assign) BOOL pretendsIsInBar;	// G=0x347cf7ad; S=0x347cf7c1; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x347ced9d; S=0x347ceced; 
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;	// G=0x347cf339; S=0x347cf2e5; 
@property(copy, nonatomic) NSArray *scopeButtonTitles;	// G=0x347cf1a9; S=0x3469bd65; 
@property(readonly, retain) UITextField *searchField;	// G=0x34605b21; converted property
@property(assign, nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;	// G=0x347cf631; S=0x347cf4ed; 
@property(assign, nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;	// G=0x347cee51; S=0x347cee11; 
@property(assign, nonatomic) UIOffset searchTextPositionAdjustment;	// G=0x347cf6cd; S=0x347cf685; 
@property(assign, nonatomic) int selectedScopeButtonIndex;	// G=0x347cf1e5; S=0x346a01f1; 
@property(assign) int shortcutConversionType;	// G=0x347cf095; S=0x347cf075; converted property
@property(assign, nonatomic) BOOL showsBookmarkButton;	// G=0x347ceea5; S=0x347cee65; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x346a55ed; S=0x345dc5f1; 
@property(assign, nonatomic) BOOL showsScopeBar;	// G=0x347cf215; S=0x34605dad; 
@property(assign, nonatomic) BOOL showsSearchResultsButton;	// G=0x347cedfd; S=0x347cedbd; 
@property(assign, nonatomic) int spellCheckingType;	// G=0x347cf035; S=0x347cf015; 
@property(copy, nonatomic) NSString *text;	// G=0x346fee5d; S=0x346a2e01; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x347cf78d; S=0x34605df1; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x346a06c9; S=0x347cec81; 
@property(assign) BOOL usesEmbeddedAppearance;	// G=0x347cef5d; S=0x345dce91; converted property
- (id)initWithCoder:(id)coder;	// 0x347ce02d
- (id)initWithFrame:(CGRect)frame;	// 0x345da0e5
- (float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;	// 0x3497e31d
- (float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;	// 0x3497e335
- (float)_availableBoundsWidth;	// 0x345e1669
- (void)_bookmarkButtonPressed;	// 0x347cfb01
- (void)_cancelButtonPressed;	// 0x346ab8dd
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x347cf0b9
- (id)_currentSeparatorImage;	// 0x345dc26d
- (float)_defaultHeight;	// 0x345dc3fd
- (void)_destroyCancelButton;	// 0x346a37b1
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x345ddefd
- (BOOL)_hasCustomAutolayoutNeighborSpacing;	// 0x3497e319
- (void)_hideShowAnimationDidFinish;	// 0x347ceebd
- (id)_imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x345db095
- (BOOL)_isEnabled;	// 0x347cfc39
- (BOOL)_isInBar;	// 0x345dc50d
- (float)_landscapeScopeBarWidth;	// 0x347cf139
- (float)_landscapeSearchFieldWidth;	// 0x347cf0f9
- (id)_makeShadowView;	// 0x346146ad
- (id)_navigationBarForShadow;	// 0x345dc969
- (void)_populateArchivedSubviews:(id)subviews;	// 0x347ce6d9
- (void)_resultsListButtonPressed;	// 0x347cfb49
- (id)_scopeBar;	// 0x3469cb39
- (void)_scopeChanged:(id)changed;	// 0x346a53dd
- (void)_searchFieldBeginEditing;	// 0x346a0155
- (void)_searchFieldEditingChanged;	// 0x346a578d
- (void)_searchFieldEndEditing;	// 0x346a3065
- (float)_searchFieldHeight;	// 0x345e1619
- (void)_searchFieldReturnPressed;	// 0x346a67c1
- (id)_separatorImage;	// 0x347cf22d
- (void)_setAutoDisableCancelButton:(BOOL)button;	// 0x345dce6d
- (void)_setCancelButtonText:(id)text;	// 0x347cfaa1
- (void)_setEnabled:(BOOL)enabled;	// 0x347cfc51
- (void)_setEnabled:(BOOL)enabled animated:(BOOL)animated;	// 0x347cfd01
- (void)_setScopeBarHidden:(BOOL)hidden;	// 0x347cf1f5
- (void)_setScopeBarSegmentsEnabled:(BOOL)enabled;	// 0x347cfc65
- (void)_setSeparatorImage:(id)image;	// 0x34605c95
- (void)_setShadowVisibleIfNecessary:(BOOL)necessary;	// 0x345dc7ed
- (void)_setShowsCancelButton:(BOOL)button;	// 0x346a0921
- (void)_setShowsSeparator:(BOOL)separator;	// 0x345dc1ad
// declared property setter: - (void)_setStatusBarTintColor:(id)color;	// 0x346a050d
- (void)_setTintColor:(id)color forceUpdate:(BOOL)update;	// 0x34605e09
- (void)_setUpScopeBar;	// 0x3469bf01
- (void)_setupCancelButton;	// 0x347cfae9
- (void)_setupCancelButtonWithAppearance:(id)appearance;	// 0x346a024d
- (void)_setupPromptLabel;	// 0x347cf7e9
- (void)_setupSearchField;	// 0x345da1e9
- (BOOL)_shouldCombineLandscapeBars;	// 0x345e1445
- (BOOL)_shouldDisplayShadow;	// 0x345dca31
// declared property getter: - (id)_statusBarTintColor;	// 0x346a0685
- (void)_updateMagnifyingGlassView;	// 0x345daff9
- (void)_updateOpacity;	// 0x345e1595
- (void)_updateRightView;	// 0x345db1c5
- (void)_updateSearchFieldArt;	// 0x345db659
// declared property getter: - (int)autocapitalizationType;	// 0x347cefd5
// declared property getter: - (int)autocorrectionType;	// 0x347ceff5
// declared property getter: - (id)backgroundImage;	// 0x34614865
// declared property getter: - (int)barStyle;	// 0x346a06f5
- (BOOL)becomeFirstResponder;	// 0x347cfbf1
- (BOOL)canBecomeFirstResponder;	// 0x347cfbcd
- (BOOL)canResignFirstResponder;	// 0x347cfc15
// converted property getter: - (id)cancelButton;	// 0x347cefc5
// converted property getter: - (BOOL)combinesLandscapeBars;	// 0x347cef49
// converted property getter: - (UIEdgeInsets)contentInset;	// 0x347cf185
// converted property getter: - (id)controller;	// 0x346ff961
- (void)dealloc;	// 0x346abd8d
// declared property getter: - (id)delegate;	// 0x347cf77d
- (void)didMoveToWindow:(id)window;	// 0x347cec4d
// converted property getter: - (BOOL)drawsBackground;	// 0x345e1579
- (void)encodeWithCoder:(id)coder;	// 0x347ce7d5
- (id)imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x347cf299
// declared property getter: - (id)inputAccessoryView;	// 0x346a0c25
- (CGSize)intrinsicContentSize;	// 0x347cf0bd
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x347db235
- (BOOL)isFirstResponder;	// 0x346085fd
// declared property getter: - (BOOL)isSearchResultsButtonSelected;	// 0x347cee51
// declared property getter: - (BOOL)isTranslucent;	// 0x346a06c9
// declared property getter: - (int)keyboardType;	// 0x347cf055
- (void)layoutSubviews;	// 0x345e0b15
- (void)movedToSuperview:(id)superview;	// 0x345dcad9
// declared property getter: - (id)placeholder;	// 0x345dd085
- (UIOffset)positionAdjustmentForSearchBarIcon:(int)searchBarIcon;	// 0x347cf725
// converted property getter: - (BOOL)pretendsIsInBar;	// 0x347cf7ad
// declared property getter: - (id)prompt;	// 0x347ced9d
- (void)reloadInputViews;	// 0x347cfbad
- (BOOL)resignFirstResponder;	// 0x34601649
// declared property getter: - (id)scopeBarBackgroundImage;	// 0x347cf339
- (id)scopeBarButtonBackgroundImageForState:(unsigned)state;	// 0x347cf3b5
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x347cf441
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned)state;	// 0x347cf4cd
// declared property getter: - (id)scopeButtonTitles;	// 0x347cf1a9
// converted property getter: - (id)searchField;	// 0x34605b21
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x347cf24d
// declared property getter: - (UIOffset)searchFieldBackgroundPositionAdjustment;	// 0x347cf631
// declared property getter: - (UIOffset)searchTextPositionAdjustment;	// 0x347cf6cd
// declared property getter: - (int)selectedScopeButtonIndex;	// 0x347cf1e5
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x34605d8d
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x345dc17d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x34605465
// declared property setter: - (void)setBarStyle:(int)style;	// 0x34614419
// converted property setter: - (void)setCancelButton:(id)button;	// 0x347cef71
// converted property setter: - (void)setCombinesLandscapeBars:(BOOL)bars;	// 0x345dd05d
// converted property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x345dd3c1
// converted property setter: - (void)setController:(id)controller;	// 0x345dce59
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x345dc19d
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x347ceee5
- (void)setImage:(id)image forSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x34605741
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x347cf79d
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x34605d6d
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x345dbdfd
- (void)setPositionAdjustment:(UIOffset)adjustment forSearchBarIcon:(int)searchBarIcon;	// 0x346059c1
// converted property setter: - (void)setPretendsIsInBar:(BOOL)bar;	// 0x347cf7c1
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x347ceced
// declared property setter: - (void)setScopeBarBackgroundImage:(id)image;	// 0x347cf2e5
- (void)setScopeBarButtonBackgroundImage:(id)image forState:(unsigned)state;	// 0x347cf359
- (void)setScopeBarButtonDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x347cf3d5
- (void)setScopeBarButtonTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x347cf475
// declared property setter: - (void)setScopeButtonTitles:(id)titles;	// 0x3469bd65
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x34605561
// declared property setter: - (void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)adjustment;	// 0x347cf4ed
// declared property setter: - (void)setSearchResultsButtonSelected:(BOOL)selected;	// 0x347cee11
// declared property setter: - (void)setSearchTextPositionAdjustment:(UIOffset)adjustment;	// 0x347cf685
// declared property setter: - (void)setSelectedScopeButtonIndex:(int)index;	// 0x346a01f1
// converted property setter: - (void)setShortcutConversionType:(int)type;	// 0x347cf075
// declared property setter: - (void)setShowsBookmarkButton:(BOOL)button;	// 0x347cee65
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x345dc5f1
- (void)setShowsCancelButton:(BOOL)button animated:(BOOL)animated;	// 0x345dc605
// declared property setter: - (void)setShowsScopeBar:(BOOL)bar;	// 0x34605dad
// declared property setter: - (void)setShowsSearchResultsButton:(BOOL)button;	// 0x347cedbd
// declared property setter: - (void)setSpellCheckingType:(int)type;	// 0x347cf015
// declared property setter: - (void)setText:(id)text;	// 0x346a2e01
// declared property setter: - (void)setTintColor:(id)color;	// 0x34605df1
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x347cec81
// converted property setter: - (void)setUsesEmbeddedAppearance:(BOOL)appearance;	// 0x345dce91
// converted property getter: - (int)shortcutConversionType;	// 0x347cf095
// declared property getter: - (BOOL)showsBookmarkButton;	// 0x347ceea5
// declared property getter: - (BOOL)showsCancelButton;	// 0x346a55ed
// declared property getter: - (BOOL)showsScopeBar;	// 0x347cf215
// declared property getter: - (BOOL)showsSearchResultsButton;	// 0x347cedfd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x345dc329
// declared property getter: - (int)spellCheckingType;	// 0x347cf035
// declared property getter: - (id)text;	// 0x346fee5d
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x346a572d
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x3469fcb1
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x346a3015
// declared property getter: - (id)tintColor;	// 0x347cf78d
// converted property getter: - (BOOL)usesEmbeddedAppearance;	// 0x347cef5d
- (void)willMoveToSuperview:(id)superview;	// 0x345dc7ad
- (void)willMoveToWindow:(id)window;	// 0x345dddb9
@end

