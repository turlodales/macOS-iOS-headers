//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface WFWebViewLink : NSObject
{
    NSURL *_href;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) NSURL *href; // @synthesize href=_href;
- (id)initWithHref:(id)arg1 rect:(struct CGRect)arg2;

@end

