//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WKDOMNode;

__attribute__((visibility("hidden")))
@interface DDRange2 : NSObject
{
    WKDOMNode *_node;
    long long _startOffset;
    long long _endOffset;
}

+ (id)rangeWithDOMRange:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) long long startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) WKDOMNode *node; // @synthesize node=_node;
- (id)description;
- (id)initWithDOMRange:(id)arg1;

@end

