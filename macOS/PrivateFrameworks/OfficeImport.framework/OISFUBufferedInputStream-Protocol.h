//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/SFUInputStream-Protocol.h>

@protocol OISFUBufferedInputStream <SFUInputStream>
- (BOOL)seekWithinBufferToOffset:(long long)arg1;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
@end

