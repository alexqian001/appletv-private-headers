/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, UINavigationBar, UIView, UIImageView, UIBarButtonItem, NSArray;

@interface UINavigationItem : NSObject <NSCoding> {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_backButtonTitle;	// 8 = 0x8
	UIBarButtonItem *_backBarButtonItem;	// 12 = 0xc
	NSString *_prompt;	// 16 = 0x10
	int _tag;	// 20 = 0x14
	id _context;	// 24 = 0x18
	UINavigationBar *_navigationBar;	// 28 = 0x1c
	UIView *_defaultTitleView;	// 32 = 0x20
	UIView *_titleView;	// 36 = 0x24
	UIView *_backButtonView;	// 40 = 0x28
	NSArray *_leftBarButtonItems;	// 44 = 0x2c
	NSArray *_rightBarButtonItems;	// 48 = 0x30
	NSArray *_customLeftViews;	// 52 = 0x34
	NSArray *_customRightViews;	// 56 = 0x38
	BOOL _hidesBackButton;	// 60 = 0x3c
	BOOL _leftItemsSupplementBackButton;	// 61 = 0x3d
	UIImageView *_frozenTitleView;	// 64 = 0x40
	BOOL _barStyleIndependent;	// 68 = 0x44
	int _independentBarStyle;	// 72 = 0x48
	NSArray *_leftItemSpaceList;	// 76 = 0x4c
	NSArray *_rightItemSpaceList;	// 80 = 0x50
	unsigned _leftFlexibleSpaceCount;	// 84 = 0x54
	unsigned _rightFlexibleSpaceCount;	// 88 = 0x58
}
@property(assign, nonatomic, getter=_isBarStyleIndependent, setter=_setBarStyleIndependent:) BOOL _barStyleIndependent;	// G=0x32cb58b5; S=0x32e3ef99; @synthesize
@property(retain) id _customLeftView;	// G=0x32cc9e1d; S=0x32cc9cf5; converted property
@property(retain) id _customLeftViews;	// G=0x32cb5e1d; S=0x32e3ed39; converted property
@property(retain) id _customRightView;	// G=0x32ccde91; S=0x32ccdd69; converted property
@property(retain) id _customRightViews;	// G=0x32cb5e79; S=0x32e3ed49; converted property
@property(assign, nonatomic, setter=_setIndependentBarStyle:) int _independentBarStyle;	// G=0x32e3efa9; S=0x32e3ef6d; @synthesize
@property(retain) id _leftBarButtonItem;	// G=0x32cc9acd; S=0x32cc9b15; converted property
@property(retain) id _leftBarButtonItems;	// G=0x32e3edc9; S=0x32e3ed29; converted property
@property(assign, nonatomic, setter=_setLeftFlexibleSpaceCount:) unsigned _leftFlexibleSpaceCount;	// G=0x32cb736d; S=0x32ccd91d; @synthesize
@property(copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList;	// G=0x32cb734d; S=0x32ccd8f9; @synthesize
@property(retain) id _rightBarButtonItem;	// G=0x32ca3e95; S=0x32ccdc61; converted property
@property(retain) id _rightBarButtonItems;	// G=0x32e3edb9; S=0x32e3ed19; converted property
@property(assign, nonatomic, setter=_setRightFlexibleSpaceCount:) unsigned _rightFlexibleSpaceCount;	// G=0x32cb737d; S=0x32ccecd1; @synthesize
@property(copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList;	// G=0x32cb735d; S=0x32ccecad; @synthesize
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem;	// G=0x32cececd; S=0x32e3ea61; 
@property(retain) NSString *backButtonTitle;	// G=0x32cecedd; S=0x32ca1d15; converted property
@property(readonly, retain) UIView *backButtonView;	// G=0x32cced81; converted property
@property(retain) id context;	// G=0x32e227b5; S=0x32e22771; converted property
@property(retain) id customLeftItem;	// G=0x32e3ef05; S=0x32cc99ed; converted property
@property(retain) id customLeftView;	// G=0x32e3ed59; S=0x32dde691; converted property
@property(retain) id customRightItem;	// G=0x32e3ef25; S=0x32dbbcf1; converted property
@property(retain) id customRightView;	// G=0x32d2a7c1; S=0x32d2a7f9; converted property
@property(retain) id customTitleView;	// G=0x32e3eef5; S=0x32e3eee5; converted property
@property(retain) id font;	// G=0x32e3ec29; S=0x32e3ebe5; converted property
@property(assign, nonatomic) BOOL hidesBackButton;	// G=0x32cb72f5; S=0x32d24091; 
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;	// G=0x32d2a789; S=0x32cc99fd; 
@property(copy, nonatomic) NSArray *leftBarButtonItems;	// G=0x32d561a9; S=0x32e3ed91; 
@property(assign, nonatomic) BOOL leftItemsSupplementBackButton;	// G=0x32cb7305; S=0x32e3ee99; 
@property(retain) UINavigationBar *navigationBar;	// G=0x32ca36e5; S=0x32cb5719; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x32cb7475; S=0x32d0c235; 
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;	// G=0x32ccdb85; S=0x32ca3bd9; 
@property(copy, nonatomic) NSArray *rightBarButtonItems;	// G=0x32d561e1; S=0x32e3eda5; 
@property(assign) int tag;	// G=0x32e3ec85; S=0x32e3ec75; converted property
@property(copy, nonatomic) NSString *title;	// G=0x32cb7315; S=0x32ca1f1d; 
@property(retain, nonatomic) UIView *titleView;	// G=0x32cb5941; S=0x32ca1e95; @synthesize=_titleView
@property(assign) float width;	// G=0x32e3ebdd; S=0x32e3ebe1; converted property
+ (id)defaultFont;	// 0x32e3e3d5
- (id)initWithCoder:(id)coder;	// 0x32e3e3f9
- (id)initWithTitle:(id)title;	// 0x32cb4e2d
- (BOOL)_accumulateViewsFromItems:(id)items isLeft:(BOOL)left refreshViews:(BOOL)views;	// 0x32cc9e65
- (id)_automationID;	// 0x32e3ef45
- (void)_cleanupFrozenTitleView;	// 0x32e3ea11
// converted property getter: - (id)_customLeftView;	// 0x32cc9e1d
// converted property getter: - (id)_customLeftViews;	// 0x32cb5e1d
// converted property getter: - (id)_customRightView;	// 0x32ccde91
// converted property getter: - (id)_customRightViews;	// 0x32cb5e79
- (void)_freezeCurrentTitleView;	// 0x32e3e89d
// declared property getter: - (int)_independentBarStyle;	// 0x32e3efa9
// declared property getter: - (BOOL)_isBarStyleIndependent;	// 0x32cb58b5
// converted property getter: - (id)_leftBarButtonItem;	// 0x32cc9acd
// converted property getter: - (id)_leftBarButtonItems;	// 0x32e3edc9
// declared property getter: - (unsigned)_leftFlexibleSpaceCount;	// 0x32cb736d
// declared property getter: - (id)_leftItemSpaceList;	// 0x32cb734d
- (void)_removeBackButtonView;	// 0x32d07329
- (void)_removeTitleAndButtonViews;	// 0x32d072bd
- (void)_replaceCustomLeftViewAtIndex:(unsigned)index withView:(id)view;	// 0x32e3ec95
- (void)_replaceCustomRightViewAtIndex:(unsigned)index withView:(id)view;	// 0x32dfa4a5
// converted property getter: - (id)_rightBarButtonItem;	// 0x32ca3e95
// converted property getter: - (id)_rightBarButtonItems;	// 0x32e3edb9
// declared property getter: - (unsigned)_rightFlexibleSpaceCount;	// 0x32cb737d
// declared property getter: - (id)_rightItemSpaceList;	// 0x32cb735d
- (void)_setBackButtonTitle:(id)title lineBreakMode:(int)mode;	// 0x32ca1d29
// declared property setter: - (void)_setBarStyleIndependent:(BOOL)independent;	// 0x32e3ef99
- (void)_setCustomLeftView:(id)view;	// 0x32cc9d05
- (void)_setCustomLeftViews:(id)views;	// 0x32ccd869
- (void)_setCustomRightView:(id)view;	// 0x32ccdd79
- (void)_setCustomRightViews:(id)views;	// 0x32ccec1d
// declared property setter: - (void)_setIndependentBarStyle:(int)style;	// 0x32e3ef6d
- (void)_setLeftBarButtonItem:(id)item;	// 0x32cc9b25
- (void)_setLeftBarButtonItems:(id)items;	// 0x32d2c0fd
// declared property setter: - (void)_setLeftFlexibleSpaceCount:(unsigned)count;	// 0x32ccd91d
// declared property setter: - (void)_setLeftItemSpaceList:(id)list;	// 0x32ccd8f9
- (void)_setRightBarButtonItem:(id)item;	// 0x32ccdc71
- (void)_setRightBarButtonItems:(id)items;	// 0x32d2c185
// declared property setter: - (void)_setRightFlexibleSpaceCount:(unsigned)count;	// 0x32ccecd1
// declared property setter: - (void)_setRightItemSpaceList:(id)list;	// 0x32ccecad
- (void)_setTitle:(id)title animated:(BOOL)animated;	// 0x32dd5d91
- (void)_setTitleAnimationDidStop:(id)_setTitleAnimation finished:(id)finished context:(void *)context;	// 0x32e3ea51
- (id)_titleView;	// 0x32cb58c5
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)barSizeChangeAndApply;	// 0x32cb5d11
// declared property getter: - (id)backBarButtonItem;	// 0x32cececd
// converted property getter: - (id)backButtonTitle;	// 0x32cecedd
// converted property getter: - (id)backButtonView;	// 0x32cced81
// converted property getter: - (id)context;	// 0x32e227b5
- (id)currentBackButtonTitle;	// 0x32cecdc5
// converted property getter: - (id)customLeftItem;	// 0x32e3ef05
// converted property getter: - (id)customLeftView;	// 0x32e3ed59
// converted property getter: - (id)customRightItem;	// 0x32e3ef25
// converted property getter: - (id)customRightView;	// 0x32d2a7c1
// converted property getter: - (id)customTitleView;	// 0x32e3eef5
- (void)dealloc;	// 0x32d2bfc1
- (void)encodeWithCoder:(id)coder;	// 0x32e3e681
- (id)existingBackButtonView;	// 0x32d2af31
// converted property getter: - (id)font;	// 0x32e3ec29
// declared property getter: - (BOOL)hidesBackButton;	// 0x32cb72f5
// declared property getter: - (id)leftBarButtonItem;	// 0x32d2a789
// declared property getter: - (id)leftBarButtonItems;	// 0x32d561a9
// declared property getter: - (BOOL)leftItemsSupplementBackButton;	// 0x32cb7305
// converted property getter: - (id)navigationBar;	// 0x32ca36e5
// declared property getter: - (id)prompt;	// 0x32cb7475
// declared property getter: - (id)rightBarButtonItem;	// 0x32ccdb85
// declared property getter: - (id)rightBarButtonItems;	// 0x32d561e1
// declared property setter: - (void)setBackBarButtonItem:(id)item;	// 0x32e3ea61
// converted property setter: - (void)setBackButtonTitle:(id)title;	// 0x32ca1d15
// converted property setter: - (void)setContext:(id)context;	// 0x32e22771
// converted property setter: - (void)setCustomLeftItem:(id)item;	// 0x32cc99ed
- (void)setCustomLeftItem:(id)item animated:(BOOL)animated;	// 0x32e3ef15
// converted property setter: - (void)setCustomLeftView:(id)view;	// 0x32dde691
- (void)setCustomLeftView:(id)view animated:(BOOL)animated;	// 0x32dde6a5
// converted property setter: - (void)setCustomRightItem:(id)item;	// 0x32dbbcf1
- (void)setCustomRightItem:(id)item animated:(BOOL)animated;	// 0x32e3ef35
// converted property setter: - (void)setCustomRightView:(id)view;	// 0x32d2a7f9
- (void)setCustomRightView:(id)view animated:(BOOL)animated;	// 0x32d2a80d
// converted property setter: - (void)setCustomTitleView:(id)view;	// 0x32e3eee5
// converted property setter: - (void)setFont:(id)font;	// 0x32e3ebe5
// declared property setter: - (void)setHidesBackButton:(BOOL)button;	// 0x32d24091
- (void)setHidesBackButton:(BOOL)button animated:(BOOL)animated;	// 0x32d13621
// declared property setter: - (void)setLeftBarButtonItem:(id)item;	// 0x32cc99fd
- (void)setLeftBarButtonItem:(id)item animated:(BOOL)animated;	// 0x32cc9a11
// declared property setter: - (void)setLeftBarButtonItems:(id)items;	// 0x32e3ed91
- (void)setLeftBarButtonItems:(id)items animated:(BOOL)animated;	// 0x32e3ee39
// declared property setter: - (void)setLeftItemsSupplementBackButton:(BOOL)button;	// 0x32e3ee99
// converted property setter: - (void)setNavigationBar:(id)bar;	// 0x32cb5719
- (void)setObject:(id)object forLeftRightKeyPath:(id)leftRightKeyPath animated:(BOOL)animated;	// 0x32ca3c95
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x32d0c235
// declared property setter: - (void)setRightBarButtonItem:(id)item;	// 0x32ca3bd9
- (void)setRightBarButtonItem:(id)item animated:(BOOL)animated;	// 0x32ca3bed
// declared property setter: - (void)setRightBarButtonItems:(id)items;	// 0x32e3eda5
- (void)setRightBarButtonItems:(id)items animated:(BOOL)animated;	// 0x32e3edd9
// converted property setter: - (void)setTag:(int)tag;	// 0x32e3ec75
// declared property setter: - (void)setTitle:(id)title;	// 0x32ca1f1d
// declared property setter: - (void)setTitleView:(id)view;	// 0x32ca1e95
// converted property setter: - (void)setWidth:(float)width;	// 0x32e3ebe1
// converted property setter: - (void)set_customLeftView:(id)view;	// 0x32cc9cf5
// converted property setter: - (void)set_customLeftViews:(id)views;	// 0x32e3ed39
// converted property setter: - (void)set_customRightView:(id)view;	// 0x32ccdd69
// converted property setter: - (void)set_customRightViews:(id)views;	// 0x32e3ed49
// converted property setter: - (void)set_leftBarButtonItem:(id)item;	// 0x32cc9b15
// converted property setter: - (void)set_leftBarButtonItems:(id)items;	// 0x32e3ed29
// converted property setter: - (void)set_rightBarButtonItem:(id)item;	// 0x32ccdc61
// converted property setter: - (void)set_rightBarButtonItems:(id)items;	// 0x32e3ed19
// converted property getter: - (int)tag;	// 0x32e3ec85
// declared property getter: - (id)title;	// 0x32cb7315
// declared property getter: - (id)titleView;	// 0x32cb5941
- (void)updateNavigationBarButtonsAnimated:(BOOL)animated;	// 0x32ccd92d
// converted property getter: - (float)width;	// 0x32e3ebdd
@end
