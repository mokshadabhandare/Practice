class Program1
{
    public static void main(String[] args) {
       String Arr[]={"greek","for","greek"};
       int Freq[]=new int[3];

       for(int i=0;i<3;i++)
       {
         Freq[i]=-1;
       }

      int Count=0;
       for(int i=0;i<3;i++)
       {
        Count=1;
          for(int j=i+1;j<3;j++)
          {
             if(Arr[i]==Arr[j])
             {
                 Count++;
                 Freq[j]=0;
             }
          }
          if(Freq[i]!=0)
          {
            Freq[i]=Count;
          }
       }

       int Max=0;
       int index=0;

       for(int i=0;i<3;i++)
       {
           if(Freq[i]!=0)
           {
              if(Freq[i]>Max)
              {
                  Max=Freq[i];
                  index=i;
              }
           }
       }
       System.out.println("Most Freq words "+Arr[index]);
    }
}
