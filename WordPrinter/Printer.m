//
//  Printer.m
//  WordPrinter
//
//  Created by Larry Luk on 2017-11-02.
//  Copyright © 2017 Lighthouse Labs. All rights reserved.
//

#import "Printer.h"

@implementation Printer

-(void)printWord:(NSString*)word {
    
    int timesPrint = [self.delegate printer:self numberOfTimesToPrint:word];
    // write a loop and print the word that number of times.
    
}

@end
