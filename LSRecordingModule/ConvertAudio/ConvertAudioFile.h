//
//  ConvertAudioFile.h
//  Expert
//
//  Created by xuxiwen on 2017/3/21.
//  Copyright © 2017年 xuxiwen. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface ConvertAudioFile : NSObject
@property (nonatomic, assign) BOOL         isPauseRecord; //暂停录音控制

/**
 get instance obj
 
 @return ConvertAudioFile instance
 */
+ (instancetype)sharedInstance;

/**
 ConvertMp3
 
 @param cafFilePath caf FilePath
 @param mp3FilePath mp3 FilePath
 @param sampleRate sampleRate (same record sampleRate set)
 @param callback callback result
 */
- (void)conventToMp3WithCafFilePath:(NSString *)cafFilePath
                        mp3FilePath:(NSString *)mp3FilePath
                         sampleRate:(int)sampleRate
                           callback:(void(^)(NSString *resultUrl,NSString *map3Url))callback;

/**
 send end record signal
 */
- (void)sendEndRecord;



// Use this FUNC convent to mp3 after record
+ (void)conventToMp3WithCafFilePath:(NSString *)cafFilePath
                        mp3FilePath:(NSString *)mp3FilePath
                         sampleRate:(int)sampleRate
                           callback:(void(^)(NSString *resultUrl,NSString *resulMp3Url))callback;

@end
