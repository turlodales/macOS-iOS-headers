//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface _MKAppImageManagerContainer : NSObject
{
    CDUnknownBlockType _completionHandler;
    NSMutableData *_data;
    NSString *_urlString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;

@end

