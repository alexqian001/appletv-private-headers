/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OADOle : NSObject {
@private
	BOOL mIconic;	// 4 = 0x4
	NSString *mCLSID;	// 8 = 0x8
	NSString *mAnsiUserType;	// 12 = 0xc
	NSString *mAnsiClipboardFormatName;	// 16 = 0x10
	unsigned mWinClipboardFormat;	// 20 = 0x14
	NSString *mMacClipboardFormat;	// 24 = 0x18
	NSString *mAnsiProgID;	// 28 = 0x1c
	NSString *mUnicodeUserType;	// 32 = 0x20
	NSString *mUnicodeClipboardFormatName;	// 36 = 0x24
	NSString *mUnicodeProgID;	// 40 = 0x28
	id mObject;	// 44 = 0x2c
}
@property(retain) id CLSID;	// G=0x31a045e9; S=0x31a04579; converted property
@property(retain) id ansiClipboardFormatName;	// G=0x31ab4801; S=0x31a57ebd; converted property
@property(retain) id ansiProgID;	// G=0x31ab4831; S=0x31a57ef5; converted property
@property(retain) id ansiUserType;	// G=0x31ab47f1; S=0x31a57e85; converted property
@property(assign) BOOL iconic;	// G=0x31ab47e1; S=0x31a580c9; converted property
@property(retain) id macClipboardFormat;	// G=0x31ab4821; S=0x31a78fe1; converted property
@property(retain) id object;	// G=0x31ab4871; S=0x31a58091; converted property
@property(retain) id unicodeClipboardFormatName;	// G=0x31ab4851; S=0x31a58021; converted property
@property(retain) id unicodeProgID;	// G=0x31ab4861; S=0x31a58059; converted property
@property(retain) id unicodeUserType;	// G=0x31ab4841; S=0x31a57fe9; converted property
@property(assign) unsigned long winClipboardFormat;	// G=0x31ab4811; S=0x31a9e905; converted property
+ (BOOL)isCLSIDSupported:(id)supported;	// 0x31ab4881
+ (BOOL)isProgIDSupported:(id)supported;	// 0x31976b09
- (id)init;	// 0x31a03ed9
// converted property getter: - (id)CLSID;	// 0x31a045e9
// converted property getter: - (id)ansiClipboardFormatName;	// 0x31ab4801
// converted property getter: - (id)ansiProgID;	// 0x31ab4831
// converted property getter: - (id)ansiUserType;	// 0x31ab47f1
- (void)dealloc;	// 0x31a04685
// converted property getter: - (BOOL)iconic;	// 0x31ab47e1
// converted property getter: - (id)macClipboardFormat;	// 0x31ab4821
// converted property getter: - (id)object;	// 0x31ab4871
// converted property setter: - (void)setAnsiClipboardFormatName:(id)name;	// 0x31a57ebd
// converted property setter: - (void)setAnsiProgID:(id)anId;	// 0x31a57ef5
// converted property setter: - (void)setAnsiUserType:(id)type;	// 0x31a57e85
// converted property setter: - (void)setCLSID:(id)clsid;	// 0x31a04579
// converted property setter: - (void)setIconic:(BOOL)iconic;	// 0x31a580c9
// converted property setter: - (void)setMacClipboardFormat:(id)format;	// 0x31a78fe1
// converted property setter: - (void)setObject:(id)object;	// 0x31a58091
// converted property setter: - (void)setUnicodeClipboardFormatName:(id)name;	// 0x31a58021
// converted property setter: - (void)setUnicodeProgID:(id)anId;	// 0x31a58059
// converted property setter: - (void)setUnicodeUserType:(id)type;	// 0x31a57fe9
// converted property setter: - (void)setWinClipboardFormat:(unsigned long)format;	// 0x31a9e905
// converted property getter: - (id)unicodeClipboardFormatName;	// 0x31ab4851
// converted property getter: - (id)unicodeProgID;	// 0x31ab4861
// converted property getter: - (id)unicodeUserType;	// 0x31ab4841
// converted property getter: - (unsigned long)winClipboardFormat;	// 0x31ab4811
@end

