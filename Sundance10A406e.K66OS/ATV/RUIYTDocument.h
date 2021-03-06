/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RUIYTDocument : XXUnknownSuperclass {
	NSError *_error;	// 4 = 0x4
	NSMutableDictionary *__metadata;	// 8 = 0x8
	id __completionHandler;	// 12 = 0xc
}
@property(copy, nonatomic) id _completionHandler;	// G=0x262725; S=0x262739; @synthesize=__completionHandler
@property(retain, nonatomic) NSMutableDictionary *_metadata;	// G=0x2626ed; S=0x2626fd; @synthesize=__metadata
@property(retain, nonatomic) NSError *error;	// G=0x2626b5; S=0x2626c5; @synthesize=_error
- (void).cxx_destruct;	// 0x262749
// declared property getter: - (id)_completionHandler;	// 0x262725
// declared property getter: - (id)_metadata;	// 0x2626ed
- (void)_requesteLoadedWithError:(id)error;	// 0x262641
- (void)cancelLoad;	// 0x2625f5
// declared property getter: - (id)error;	// 0x2626b5
- (void)loadWithCompletionHandler:(id)completionHandler;	// 0x26257d
- (id)metadataForKey:(id)key;	// 0x262515
// declared property setter: - (void)setError:(id)error;	// 0x2626c5
- (void)setMetadata:(id)metadata forKey:(id)key;	// 0x262431
// declared property setter: - (void)set_completionHandler:(id)handler;	// 0x262739
// declared property setter: - (void)set_metadata:(id)metadata;	// 0x2626fd
@end

