//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSAppLink, NSURL;

@interface SFUniversalLink : NSObject
{
    LSAppLink *_appLink;
    NSURL *_webpageURL;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) NSURL *applicationURL;
- (id)initWithWebpageURL:(id)arg1;
- (id)init;

@end

