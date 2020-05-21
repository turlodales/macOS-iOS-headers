//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@interface DEManifest : NSObject
{
    NSDictionary *_contents;
    NSData *_version;
    NSData *_keyVersion;
}

+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(BOOL)arg2;
+ (BOOL)write:(id)arg1 toURL:(id)arg2 keyId:(unsigned long long)arg3 multipart:(BOOL)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *keyVersion; // @synthesize keyVersion=_keyVersion;
@property(retain, nonatomic) NSData *version; // @synthesize version=_version;
@property(retain, nonatomic) NSDictionary *contents; // @synthesize contents=_contents;
- (id)init;
- (id)initWithContents:(id)arg1 version:(id)arg2 keyVersion:(id)arg3;

@end

