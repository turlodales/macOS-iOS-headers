//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScriptingBridge/SBThunk.h>

__attribute__((visibility("hidden")))
@interface SBPropertyThunk : SBThunk
{
    unsigned int _code;
    unsigned int _ae_type;
    BOOL _is_value;
}

+ (id)thunksForElement:(id)arg1 inDocument:(id)arg2;
- (id)selectorNameForName:(id)arg1;
- (id)signatureFormat;
- (BOOL)isEqual:(id)arg1;
- (BOOL)is_value;
- (unsigned int)ae_type;
- (unsigned int)code;
- (id)initWithElement:(id)arg1 inDocument:(id)arg2;

@end

