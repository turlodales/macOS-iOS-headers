//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface NUScript : NSObject
{
    NSString *_source;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *source; // @synthesize source=_source;
- (id)description;
- (BOOL)load:(out id *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

