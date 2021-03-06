/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSFileHandle;

@interface MEJSONExporter : NSObject {
	NSFileHandle *mOutputFile;	// 4 = 0x4
	int mIndentLevel;	// 8 = 0x8
	int mIndent;	// 12 = 0xc
	BOOL mPrettyPrint;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL prettyPrint;	// G=0x3659ec61; S=0x3659ec71; @synthesize=mPrettyPrint
- (id)init;	// 0x3659e265
- (void)_appendIndent;	// 0x3659ebcd
- (void)_appendNewline;	// 0x3659ec31
- (void)_appendString:(id)string;	// 0x3659eb8d
- (void)_exportArray:(id)array;	// 0x3659e72d
- (void)_exportDictionary:(id)dictionary;	// 0x3659e469
- (void)_exportValue:(id)value;	// 0x3659e951
- (void)dealloc;	// 0x3659e2c1
- (BOOL)exportPropertyList:(id)list toPath:(id)path;	// 0x3659e311
// declared property getter: - (BOOL)prettyPrint;	// 0x3659ec61
// declared property setter: - (void)setPrettyPrint:(BOOL)print;	// 0x3659ec71
@end

