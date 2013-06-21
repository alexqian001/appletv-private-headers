/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSError, NSDictionary, NSString, NSArray;

@interface IMXMLReparserContext : NSObject {
	NSString *_inContent;	// 4 = 0x4
	NSString *_outContent;	// 8 = 0x8
	NSArray *_attributesToPreserve;	// 12 = 0xc
	NSDictionary *_attributesToMerge;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
}
@property(readonly, assign) NSString *_inContent;	// G=0x341b060d; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *attributesToMerge;	// G=0x341b0651; @synthesize=_attributesToMerge
@property(readonly, assign, nonatomic) NSArray *attributesToPreserve;	// G=0x341b0641; @synthesize=_attributesToPreserve
@property(readonly, assign, nonatomic) NSError *error;	// G=0x341b0621; @synthesize=_error
@property(readonly, assign, nonatomic) NSString *outContent;	// G=0x341b0631; @synthesize=_outContent
- (id)initWithContent:(id)content attributesToPreserve:(id)preserve attributesToMerge:(id)merge;	// 0x341b0471
// declared property getter: - (id)_inContent;	// 0x341b060d
- (void)_setOutContent:(id)content error:(id)error;	// 0x341b058d
// declared property getter: - (id)attributesToMerge;	// 0x341b0651
// declared property getter: - (id)attributesToPreserve;	// 0x341b0641
- (void)dealloc;	// 0x341b0501
// declared property getter: - (id)error;	// 0x341b0621
// declared property getter: - (id)outContent;	// 0x341b0631
@end
