/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVImage, ATVProxyViewController, BRMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVJSTextEntryControl : XXUnknownSuperclass {
	NSString *_loadingImageID;	// 4 = 0x4
	ATVImage *_image;	// 8 = 0x8
	BOOL _hideText;	// 12 = 0xc
	ATVProxyViewController *_proxyViewController;	// 16 = 0x10
	BRMerchant *_merchant;	// 20 = 0x14
	int _textEntryStyle;	// 24 = 0x18
	NSString *_type;	// 28 = 0x1c
	NSString *_title;	// 32 = 0x20
	NSString *_instructions;	// 36 = 0x24
	NSString *_label;	// 40 = 0x28
	NSString *_footnote;	// 44 = 0x2c
	NSString *_defaultValue;	// 48 = 0x30
	NSString *_imageURL;	// 52 = 0x34
	id _submitBlock;	// 56 = 0x38
	id _cancelBlock;	// 60 = 0x3c
}
@property(copy, nonatomic) id cancelBlock;	// G=0x164d09; S=0x164d1d; @synthesize=_cancelBlock
@property(retain, nonatomic) NSString *defaultValue;	// G=0x164ca5; S=0x164cb5; @synthesize=_defaultValue
@property(retain, nonatomic) NSString *footnote;	// G=0x164c85; S=0x164c95; @synthesize=_footnote
@property(assign, nonatomic) BOOL hideText;	// G=0x164be5; S=0x164bf5; @synthesize=_hideText
@property(retain, nonatomic) NSString *imageURL;	// G=0x164cc5; S=0x164cd5; @synthesize=_imageURL
@property(retain, nonatomic) NSString *instructions;	// G=0x164c45; S=0x164c55; @synthesize=_instructions
@property(retain, nonatomic) NSString *label;	// G=0x164c65; S=0x164c75; @synthesize=_label
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x164ba5; S=0x164bb5; @synthesize=_merchant
@property(readonly, assign, nonatomic) id onCancel;	// G=0x164969; @dynamic
@property(readonly, assign, nonatomic) id onLoad;	// G=0x1641e1; @dynamic
@property(readonly, assign, nonatomic) id onLoadCompletion;	// G=0x164405; @dynamic
@property(assign, nonatomic) ATVProxyViewController *proxyViewController;	// G=0x164b95; S=0x1641d1; @synthesize=_proxyViewController
@property(copy, nonatomic) id submitBlock;	// G=0x164ce5; S=0x164cf9; @synthesize=_submitBlock
@property(assign, nonatomic) int textEntryStyle;	// G=0x164bc5; S=0x164bd5; @synthesize=_textEntryStyle
@property(retain, nonatomic) NSString *title;	// G=0x164c25; S=0x164c35; @synthesize=_title
@property(retain, nonatomic) NSString *type;	// G=0x164c05; S=0x164c15; @synthesize=_type
- (void)_imageLoadFailed:(id)failed;	// 0x164b01
- (void)_imageLoaded:(id)loaded;	// 0x164a01
// declared property getter: - (id)cancelBlock;	// 0x164d09
- (void)dealloc;	// 0x164079
// declared property getter: - (id)defaultValue;	// 0x164ca5
// declared property getter: - (id)footnote;	// 0x164c85
// declared property getter: - (BOOL)hideText;	// 0x164be5
// declared property getter: - (id)imageURL;	// 0x164cc5
// declared property getter: - (id)instructions;	// 0x164c45
// declared property getter: - (id)label;	// 0x164c65
// declared property getter: - (id)merchant;	// 0x164ba5
// declared property getter: - (id)onCancel;	// 0x164969
// declared property getter: - (id)onLoad;	// 0x1641e1
// declared property getter: - (id)onLoadCompletion;	// 0x164405
// declared property getter: - (id)proxyViewController;	// 0x164b95
// declared property setter: - (void)setCancelBlock:(id)block;	// 0x164d1d
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x164cb5
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x164c95
// declared property setter: - (void)setHideText:(BOOL)text;	// 0x164bf5
// declared property setter: - (void)setImageURL:(id)url;	// 0x164cd5
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x164c55
// declared property setter: - (void)setLabel:(id)label;	// 0x164c75
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x164bb5
// declared property setter: - (void)setProxyViewController:(id)controller;	// 0x1641d1
// declared property setter: - (void)setSubmitBlock:(id)block;	// 0x164cf9
// declared property setter: - (void)setTextEntryStyle:(int)style;	// 0x164bd5
// declared property setter: - (void)setTitle:(id)title;	// 0x164c35
// declared property setter: - (void)setType:(id)type;	// 0x164c15
// declared property getter: - (id)submitBlock;	// 0x164ce5
// declared property getter: - (int)textEntryStyle;	// 0x164bc5
// declared property getter: - (id)title;	// 0x164c25
// declared property getter: - (id)type;	// 0x164c05
@end
