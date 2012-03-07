/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CPMessageEntry : NSObject {
@private
	int m_timeStamp;	// 4 = 0x4
	int m_tag;	// 8 = 0x8
	NSString *m_text;	// 12 = 0xc
	NSArray *m_parameters;	// 16 = 0x10
	NSMutableArray *m_affectedObjects;	// 20 = 0x14
	int m_count;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *affectedObjects;	// G=0x353f1851; converted property
@property(assign, nonatomic) int timeStamp;	// G=0x353f1899; S=0x353f18a9; @synthesize=m_timeStamp
+ (void)initialize;	// 0x352e4d31
- (id)initWithTag:(int)tag affectedObject:(id)object text:(id)text parameters:(void *)parameters;	// 0x352e4d91
- (void)addAffectedObject:(id)object;	// 0x352e4ef5
// converted property getter: - (id)affectedObjects;	// 0x353f1851
- (void)dealloc;	// 0x352e4fb5
- (id)description;	// 0x353f2691
- (int)getCount;	// 0x353f1861
- (int)getMessageTag;	// 0x353f1831
- (id)getMessageText;	// 0x353f1841
- (id)getParameter:(unsigned)parameter;	// 0x353f2705
- (int)getParameterCount;	// 0x353f274d
- (unsigned)hash;	// 0x353f276d
- (BOOL)isEqual:(id)equal;	// 0x353f27a5
- (void)logWithCat:(id)cat;	// 0x353f1895
- (void)mergeEntries:(id)entries;	// 0x353f25d5
// declared property setter: - (void)setTimeStamp:(int)stamp;	// 0x353f18a9
// declared property getter: - (int)timeStamp;	// 0x353f1899
- (int)timeStampCompare:(id)compare;	// 0x353f1871
@end
