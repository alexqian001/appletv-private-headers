/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <NSObject.h> // Unknown library
#import "DataDetectorsCore-Structs.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DDLocation : NSObject <NSCoding> {
	NSString *_fileName;	// 4 = 0x4
	int _firstLine;	// 8 = 0x8
	int _firstColumn;	// 12 = 0xc
	int _lastLine;	// 16 = 0x10
	int _lastColumn;	// 20 = 0x14
}
@property(readonly, assign) NSString *fileName;	// G=0x3217f201; @synthesize=_fileName
@property(readonly, assign) int firstColumn;	// G=0x3217f229; @synthesize=_firstColumn
@property(readonly, assign) int firstLine;	// G=0x3217f215; @synthesize=_firstLine
@property(readonly, assign) int lastColumn;	// G=0x3217f251; @synthesize=_lastColumn
@property(readonly, assign) int lastLine;	// G=0x3217f23d; @synthesize=_lastLine
- (id)initWithCoder:(id)coder;	// 0x3217f051
- (id)initWithFileName:(id)fileName firstLine:(int)line firstColumn:(int)column lastLine:(int)line4 lastColumn:(int)column5;	// 0x3217ee49
- (id)initWithFileName:(id)fileName position:(DDExpressionPosition)position;	// 0x3217eef1
- (void)dealloc;	// 0x3217ef25
- (id)description;	// 0x3217f0fd
- (void)encodeWithCoder:(id)coder;	// 0x3217ef71
// declared property getter: - (id)fileName;	// 0x3217f201
// declared property getter: - (int)firstColumn;	// 0x3217f229
// declared property getter: - (int)firstLine;	// 0x3217f215
// declared property getter: - (int)lastColumn;	// 0x3217f251
// declared property getter: - (int)lastLine;	// 0x3217f23d
- (DDExpressionPosition)position;	// 0x3217f199
@end
