//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSEncodingDetectionPlaceholder : NSObject
{
    unsigned long long nsEncoding;
    unsigned int cfEncoding;
    NSString *string;
    char *bytes;
    unsigned long long bytesLength;
    char *bytesStart;
}

+ (id)placeholderForDetector:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
@property(readonly) unsigned long long bytesLength;
@property(readonly) char *bytes;
@property(readonly) NSString *string;
@property(readonly) unsigned int cfEncoding;
@property(readonly) unsigned long long nsEncoding;

@end

