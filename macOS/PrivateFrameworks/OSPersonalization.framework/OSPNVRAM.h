//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSPNVRAM : NSObject
{
}

+ (id)sharedInstance;
- (unsigned long long)unsignedLongLongForKey:(id)arg1 namespace:(id)arg2;
- (unsigned long long)unsignedLongLongForKey:(id)arg1;
- (unsigned int)unsignedIntForKey:(id)arg1 namespace:(id)arg2;
- (unsigned int)unsignedIntForKey:(id)arg1;
- (unsigned char)byteForKey:(id)arg1 namespace:(id)arg2;
- (unsigned char)byteForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 namespace:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)setString:(id)arg1 forKey:(id)arg2 namespace:(id)arg3;
- (BOOL)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1 namespace:(id)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)setData:(id)arg1 forKey:(id)arg2 namespace:(id)arg3;
- (BOOL)setData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1 namespace:(id)arg2;
- (id)dataForKey:(id)arg1;

@end

