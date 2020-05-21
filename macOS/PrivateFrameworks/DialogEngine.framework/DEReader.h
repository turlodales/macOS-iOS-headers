//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSFileHandle, NSMutableData, NSURL;

@interface DEReader : NSObject
{
    BOOL _rewound;
    NSURL *_src;
    NSFileHandle *_file;
    NSData *_contents;
    unsigned long long _contentsOffset;
    NSMutableData *_rewindBuffer;
    unsigned long long _rewindOffset;
}

+ (id)readDataOfLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 from:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long rewindOffset; // @synthesize rewindOffset=_rewindOffset;
@property(retain, nonatomic) NSMutableData *rewindBuffer; // @synthesize rewindBuffer=_rewindBuffer;
@property(nonatomic) BOOL rewound; // @synthesize rewound=_rewound;
@property(nonatomic) unsigned long long contentsOffset; // @synthesize contentsOffset=_contentsOffset;
@property(retain, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSFileHandle *file; // @synthesize file=_file;
@property(retain, nonatomic) NSURL *src; // @synthesize src=_src;
- (void)rewind;
- (BOOL)isRewindable;
- (void)disableRewind;
- (id)readData;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)initFromData:(id)arg1;
- (id)initFromData:(id)arg1 rewindable:(BOOL)arg2;
- (id)initFromURL:(id)arg1;
- (id)initFromURL:(id)arg1 rewindable:(BOOL)arg2;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initFromURL:(id)arg1 orData:(id)arg2 rewindable:(BOOL)arg3;

@end

