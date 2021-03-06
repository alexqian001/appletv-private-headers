/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVImage, BRMerchant, NSString, ATVProxyViewController;

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
@property(copy, nonatomic) id cancelBlock;	// G=0x14a745; S=0x14a759; @synthesize=_cancelBlock
@property(retain, nonatomic) NSString *defaultValue;	// G=0x14a6e1; S=0x14a6f1; @synthesize=_defaultValue
@property(retain, nonatomic) NSString *footnote;	// G=0x14a6c1; S=0x14a6d1; @synthesize=_footnote
@property(assign, nonatomic) BOOL hideText;	// G=0x14a621; S=0x14a631; @synthesize=_hideText
@property(retain, nonatomic) NSString *imageURL;	// G=0x14a701; S=0x14a711; @synthesize=_imageURL
@property(retain, nonatomic) NSString *instructions;	// G=0x14a681; S=0x14a691; @synthesize=_instructions
@property(retain, nonatomic) NSString *label;	// G=0x14a6a1; S=0x14a6b1; @synthesize=_label
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x14a5e1; S=0x14a5f1; @synthesize=_merchant
@property(readonly, assign, nonatomic) id onCancel;	// G=0x14a3a5; @dynamic
@property(readonly, assign, nonatomic) id onLoad;	// G=0x149c1d; @dynamic
@property(readonly, assign, nonatomic) id onLoadCompletion;	// G=0x149e41; @dynamic
@property(assign, nonatomic) ATVProxyViewController *proxyViewController;	// G=0x14a5d1; S=0x149c0d; @synthesize=_proxyViewController
@property(copy, nonatomic) id submitBlock;	// G=0x14a721; S=0x14a735; @synthesize=_submitBlock
@property(assign, nonatomic) int textEntryStyle;	// G=0x14a601; S=0x14a611; @synthesize=_textEntryStyle
@property(retain, nonatomic) NSString *title;	// G=0x14a661; S=0x14a671; @synthesize=_title
@property(retain, nonatomic) NSString *type;	// G=0x14a641; S=0x14a651; @synthesize=_type
- (void)_imageLoadFailed:(id)failed;	// 0x14a53d
- (void)_imageLoaded:(id)loaded;	// 0x14a43d
// declared property getter: - (id)cancelBlock;	// 0x14a745
- (void)dealloc;	// 0x149ab5
// declared property getter: - (id)defaultValue;	// 0x14a6e1
// declared property getter: - (id)footnote;	// 0x14a6c1
// declared property getter: - (BOOL)hideText;	// 0x14a621
// declared property getter: - (id)imageURL;	// 0x14a701
// declared property getter: - (id)instructions;	// 0x14a681
// declared property getter: - (id)label;	// 0x14a6a1
// declared property getter: - (id)merchant;	// 0x14a5e1
// declared property getter: - (id)onCancel;	// 0x14a3a5
// declared property getter: - (id)onLoad;	// 0x149c1d
// declared property getter: - (id)onLoadCompletion;	// 0x149e41
// declared property getter: - (id)proxyViewController;	// 0x14a5d1
// declared property setter: - (void)setCancelBlock:(id)block;	// 0x14a759
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x14a6f1
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x14a6d1
// declared property setter: - (void)setHideText:(BOOL)text;	// 0x14a631
// declared property setter: - (void)setImageURL:(id)url;	// 0x14a711
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x14a691
// declared property setter: - (void)setLabel:(id)label;	// 0x14a6b1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x14a5f1
// declared property setter: - (void)setProxyViewController:(id)controller;	// 0x149c0d
// declared property setter: - (void)setSubmitBlock:(id)block;	// 0x14a735
// declared property setter: - (void)setTextEntryStyle:(int)style;	// 0x14a611
// declared property setter: - (void)setTitle:(id)title;	// 0x14a671
// declared property setter: - (void)setType:(id)type;	// 0x14a651
// declared property getter: - (id)submitBlock;	// 0x14a721
// declared property getter: - (int)textEntryStyle;	// 0x14a601
// declared property getter: - (id)title;	// 0x14a661
// declared property getter: - (id)type;	// 0x14a641
@end

