//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEFileHandle.h>

@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle
{
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly) NSString *name; // @synthesize name=_name;
- (unsigned long long)type;
- (id)description;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPolicySession:(id)arg1 name:(id)arg2;
- (id)initWithPolicySession:(id)arg1;

@end

