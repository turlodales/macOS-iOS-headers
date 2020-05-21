//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface AVMetadataEnumerator : NSEnumerator
{
    struct OpaqueFigMetadataReader *_reader;
    NSEnumerator *_arrayEnumerator;
    id _key;
    NSString *_keySpace;
    NSLocale *_locale;
    long long _count;
    long long _index;
}

+ (id)metadataEnumeratorWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4;
+ (id)metadataEnumeratorWithMetadataReader:(struct OpaqueFigMetadataReader *)arg1;
- (id)nextObject;
- (void)_setLocale:(id)arg1;
- (void)_setKeySpace:(id)arg1;
- (void)_setKey:(id)arg1;
- (void)_setArrayEnumerator:(id)arg1;
- (void)_setMetadataReader:(struct OpaqueFigMetadataReader *)arg1;
- (void)dealloc;
- (id)initWithMetadataReader:(struct OpaqueFigMetadataReader *)arg1 array:(id)arg2 key:(id)arg3 keySpace:(id)arg4 locale:(id)arg5;
- (id)initWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4;
- (id)initWithMetadataReader:(struct OpaqueFigMetadataReader *)arg1;

@end

