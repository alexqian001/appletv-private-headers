/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class NSString;

@interface AXFileLogger : NSObject {
	NSString *_filePath;	// 4 = 0x4
}
@property(copy, nonatomic) NSString *filePath;	// G=0x2fe3f3bd; S=0x2fe3f3d1; @synthesize=_filePath
+ (id)defaultFileLogger;	// 0x2fe3f185
- (id)initWithFilePath:(id)filePath;	// 0x2fe3f1f9
- (void)dealloc;	// 0x2fe3f245
// declared property getter: - (id)filePath;	// 0x2fe3f3bd
- (void)log:(id)log;	// 0x2fe3f289
// declared property setter: - (void)setFilePath:(id)path;	// 0x2fe3f3d1
@end
