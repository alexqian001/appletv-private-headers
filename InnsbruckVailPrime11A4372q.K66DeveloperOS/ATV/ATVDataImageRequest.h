/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataQuery;

__attribute__((visibility("hidden")))
@interface ATVDataImageRequest : XXUnknownSuperclass {
	ATVDataQuery *_query;	// 4 = 0x4
	id _completionHandler;	// 8 = 0x8
}
@property(copy, nonatomic) id completionHandler;	// G=0x312891; S=0x3128a5; @synthesize=_completionHandler
@property(assign, nonatomic) __weak ATVDataQuery *query;	// G=0x31285d; S=0x31287d; @synthesize=_query
- (id)initWithQuery:(id)query completionHandler:(id)handler;	// 0x3127d9
- (void).cxx_destruct;	// 0x3128b5
// declared property getter: - (id)completionHandler;	// 0x312891
// declared property getter: - (id)query;	// 0x31285d
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x3128a5
// declared property setter: - (void)setQuery:(id)query;	// 0x31287d
@end

