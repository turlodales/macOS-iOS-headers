//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICNFMCURLMatch : NSObject
{
    NSString *_url;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithRange:(struct _NSRange)arg1 url:(id)arg2;

@end

