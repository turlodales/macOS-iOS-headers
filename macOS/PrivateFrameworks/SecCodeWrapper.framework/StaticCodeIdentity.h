//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecCodeWrapper/CodeIdentity.h>

@interface StaticCodeIdentity : CodeIdentity
{
    struct __SecCode *_secStaticCodeRef;
}

+ (id)codeIdentityOfApplicationAtURL:(id)arg1 error:(id *)arg2;
+ (id)codeIdentityOfApplicationAtURL:(id)arg1;
+ (unsigned int)minimalValidationFlags;
@property(readonly) struct __SecCode *staticCodeRef; // @synthesize staticCodeRef=_secStaticCodeRef;
- (BOOL)validateWithFlags:(unsigned int)arg1 additionalRequirement:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithSecStaticCodeRef:(struct __SecCode *)arg1;

@end

