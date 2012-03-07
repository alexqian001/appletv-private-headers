/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	NSMutableArray *mProcessors;	// 8 = 0x8
}
- (id)initWithWorkbook:(id)workbook;	// 0x34c56d31
- (void)addProcessorClass:(Class)aClass;	// 0x34c56ead
- (void)applyProcessorsWithSheet:(id)sheet;	// 0x34c75355
- (void)dealloc;	// 0x34c8f09d
- (bool)hasProcessors;	// 0x34dcfdcd
- (void)markObject:(id)object processor:(Class)processor;	// 0x34c6bbd1
- (void)removeAllObjects;	// 0x34c56e8d
- (void)removeProcessorClass:(Class)aClass;	// 0x34dcfd31
@end
