//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _NCCocoaBinding : NSObject
{
    _Bool _observesSelf;
    id _object;
    NSString *_keyPath;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (id)initWithObject:(id)arg1 KeyPath:(id)arg2 andBlock:(CDUnknownBlockType)arg3;

@end

